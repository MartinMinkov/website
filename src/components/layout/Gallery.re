module Style = {
  open Css;

  let galleryContainer =
    style([
      display(`grid),
      gridTemplateColumns([
        `repeat((`autoFit, `minmax((`rem(28.0), `fr(1.0))))),
      ]),
    ]);

  let galleryItem =
    style([width(`percent(100.0)), height(`percent(100.0))]);
};

let imagesToRender = [|
  "img1.jpg",
  "img2.jpg",
  "img3.jpg",
  "img4.jpg",
  "img5.jpg",
  "img6.jpg",
  "img7.jpg",
  "img8.jpg",
  "img9.jpg",
  "img10.jpg",
  "img11.jpg",
  "img12.jpg",
|];

[@react.component]
let make = () =>
  <div className=Style.galleryContainer>
    {imagesToRender
     |> Array.map(img =>
          <figure key=img>
            <img src={j|static/images/$img|j} className=Style.galleryItem />
          </figure>
        )
     |> ReasonReact.array}
  </div>;

let default = make;
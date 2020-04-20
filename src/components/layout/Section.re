module Style = {
  open Css;

  let sectionContainer =
    merge([
      style([
        display(`grid),
        gridTemplateColumns([`rem(1.0), `fr(1.0)]),
        gridTemplateRows([
          `minmax((`rem(1.0), `fr(1.0))),
          `minmax((`rem(1.0), `fr(1.0))),
        ]),
        gridColumnGap(rem(1.0)),
        alignItems(`start),
        justifyContent(`center),
      ]),
      "container",
    ]);

  let sectionTitle = merge([style([fontSize(Style.Sizes.large)]), "title"]);

  let sectionIcon = merge([style([justifySelf(`center)]), "icon"]);
};

[@react.component]
let make =
    (
      ~title: string,
      ~subtitle: string=?,
      ~icon: React.element=?,
      ~children: React.element=?,
    ) => {
  <section className="section is-fluid">
    <div className=Style.sectionContainer>
      <span className=Style.sectionIcon> icon </span>
      <h1 className=Style.sectionTitle> {title |> ReasonReact.string} </h1>
      <h2 className="subtitle"> {subtitle |> ReasonReact.string} </h2>
      children
    </div>
  </section>;
};
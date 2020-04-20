module Style = {
  open Css;
  let funfactsContainer =
    style([
      display(`grid),
      gridTemplateColumns([`fr(1.0), `fr(1.0)]),
      marginLeft(`rem(5.0)),
    ]);

  let funFactImage = style([width(`rem(30.0)), height(`rem(20.0))]);
};

let s = s => ReasonReact.string(s);

[@react.component]
let make = () =>
  <div>
    <div>
      <Section
        title="Some fun facts about my hobbies"
        icon={<Icons.Wave height="2rem" />}>
        <p>
          {s(
             "While you're here on this website, might as well learn a few fun facts that I find interesting!",
           )}
        </p>
      </Section>
    </div>
    <div className=Style.funfactsContainer>
      <Section
        title="Olympic Weightlifting" icon={<Icons.Wave height="2rem" />}>
        <p>
          {s(
             "Olympic Weightlifting  made its first appearence in the 1896 Olympics and then again in 1904;
        however, it wasn't until 1920 that it was permanently established as an Olympic Sport.",
           )}
        </p>
        <img src="static/gifs/oly.gif" className=Style.funFactImage />
      </Section>
      <Section title="Programming" icon={<Icons.Github height="2rem" />}>
        <p>
          {s(
             "Grace Murray Hopper was one of the first computer programmers to work on the Harvard Mark I.
             She was also a United States Navy rear admiral, helped develop COBOL -- one of the first high-level
             programming languages -- and invented the first compiler, a program that translates programming code
             to machine language.",
           )}
        </p>
        <img
          src="static/images/gracehopper.jpg"
          className=Style.funFactImage
        />
      </Section>
      <Section title="Web Development" icon={<Icons.Github height="2rem" />}>
        <p>
          {s(
             "This website was built with Reason and Next.js, which has been really fun to work with. Reason lets you write
        simple, fast and quality type safe code while leveraging both the JavaScript & OCaml ecosystems.",
           )}
        </p>
        <img src="static/images/reason.png" className=Style.funFactImage />
      </Section>
      <Section title="BJJ" icon={<Icons.Github height="2rem" />}>
        <p>
          {s(
             "BJJ is a relatively new martial art, originating from Rio de Jeneiro in the 1920s. Nowadays, it takes an average
        of 8-12 years to get a black belt in the sport and is practiced by many around the world. There is never an age
        that is too old to start!",
           )}
        </p>
        <img src="static/images/bjj.jpg" className=Style.funFactImage />
      </Section>
    </div>
  </div>;

let default = make;
module Style = {
  open Css;

  let funFactText = selector("p", [fontSize(Style.Sizes.medium)]);

  let titleContainer =
    style([
      display(`flex),
      flexDirection(`column),
      justifyContent(`center),
      alignItems(`center),
      funFactText,
    ]);

  let funFactContainer =
    style([
      display(`grid),
      gridTemplateColumns([
        `repeat((`autoFit, `minmax((`rem(60.0), `fr(1.0))))),
      ]),
      alignItems(`start),
      marginLeft(`rem(5.0)),
      funFactText,
    ]);

  let funFactImage =
    style([
      marginTop(`rem(2.0)),
      width(`rem(30.0)),
      height(`rem(20.0)),
    ]);
};

let s = s => ReasonReact.string(s);

[@react.component]
let make = () =>
  <div>
    <div className=Style.titleContainer>
      <Section title="Some fun facts about my hobbies">
        <p>
          {s(
             "While you're here on this website, might as well learn a few fun facts that I find interesting!",
           )}
        </p>
      </Section>
    </div>
    <div className=Style.funFactContainer>
      <Section title="Olympic Weightlifting">
        <p>
          {s("Olympic Weightlifting  made its first appearence in the ")}
          <a href="https://www.olympic.org/athens-1896">
            {s("1896 Olympics")}
          </a>
          {s(" and then again in")}
          <a href="https://www.olympic.org/st-louis-1904"> {s(" 1904")} </a>
          {s(" however, it wasn't until ")}
          <a href="https://www.olympic.org/antwerp-1920"> {s("1920")} </a>
          {s(" that it was permanently established as an Olympic Sport.")}
        </p>
        <img src="static/gifs/oly.gif" className=Style.funFactImage />
      </Section>
      <Section title="Programming">
        <p>
          <a href="https://en.wikipedia.org/wiki/Grace_Hopper">
            {s("Grace Murray Hopper ")}
          </a>
          {s(
             "was one of the first computer programmers to work on the Harvard Mark I.
             She was also a United States Navy rear admiral, helped develop ",
           )}
          <a href="https://en.wikipedia.org/wiki/COBOL"> {s("COBOL ")} </a>
          {s(
             "-- one of the first high-level
             programming languages -- and invented the first compiler, a program that translates programming code
             to machine language.",
           )}
        </p>
        <img
          src="static/images/gracehopper.jpg"
          className=Style.funFactImage
        />
      </Section>
      <Section title="Web Development">
        <p>
          {s("This website was built with")}
          <a href="https://reasonml.github.io/"> {s(" Reason ")} </a>
          {s(" and ")}
          <a href="https://nextjs.org/"> {s("Next.js.")} </a>
          {s(
             " ReasonML is a syntax extension for the OCaml language created by Facebook.
             Rather than creating an entirely new language, the creators of Reason chose to
             build on top of OCaml, a battle-tested functional systems programming language
             that's been around since the late 1990s.",
           )}
        </p>
        <img src="static/images/reason.png" className=Style.funFactImage />
      </Section>
      <Section title="BJJ">
        <p>
          {s(
             "Brazilian Jiu Jitsu is a relatively new martial art, originating from Rio de Jeneiro in the 1920s. Nowadays, it takes an average
        of 8-12 years to get a black belt in the sport and is practiced by many around the world. There is never an age
        that is too old to start!",
           )}
        </p>
        <img src="static/images/bjj.jpg" className=Style.funFactImage />
      </Section>
    </div>
  </div>;

let default = make;
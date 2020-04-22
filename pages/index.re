module Style = {
  open Css;

  let indexText = selector("p", [fontSize(Style.Sizes.medium)]);

  let indexContainer =
    style([
      display(`flex),
      justifyContent(`spaceBetween),
      flexWrap(`wrap),
      alignItems(`start),
      indexText,
    ]);
};

let s = s => ReasonReact.string(s);

[@react.component]
let make = () =>
  <div>
    <Gallery />
    <div className=Style.indexContainer>
      <Section
        title="Hey, I'm Martin - A software developer from Canada"
        icon={<Icons.Wave height="4rem" />}>
        <p>
          {s("I'm a 4th year computer science student at ")}
          <a href="https://www.sfu.ca/"> {s("Simon Fraser University ")} </a>
          {s("I've also previously graduated from ")}
          <a href="https://www.bcit.ca/"> {s("BCIT")} </a>
          {s(
             " with a 2 year diploma. I enjoy working with new technologies and being exposed to all kinds of ideas.
             Feel free to get in touch with me!",
           )}
        </p>
      </Section>
      <Section
        title="Development Experience" icon={<Icons.Github height="4rem" />}>
        <p>
          {s(
             "I have experience working with various languages and frameworks.
             At BCIT, I was exposed to a lot of C++ and networking principles.
             At SFU, I have taken a more general approach and have taken courses in compiler design and implementation, embedded development,
             computational complexity, and parallel programming. In my free time, I like to work on web development projects
             and genuinely enjoy working with React.",
           )}
        </p>
      </Section>
    </div>
  </div>;

let default = make;
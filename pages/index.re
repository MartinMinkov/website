module Style = {
  open Css;
  let sectionContainer =
    style([
      display(`flex),
      justifyContent(`spaceBetween),
      alignItems(`start),
    ]);
};

let firstText = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam aliquet turpis quam, id commodo odio accumsan eget. Vivamus ipsum magna, mattis quis ullamcorper nec, vulputate sed neque. Nullam mollis lacinia ex, vel cursus tortor feugiat vitae.";

[@react.component]
let make = () =>
  <div>
    <Gallery />
    <div className=Style.sectionContainer>
      <Section
        title="Hey, I'm Martin - A software developer from Canada"
        icon={<Icons.Wave height="2rem" />}>
        <p> {firstText |> React.string} </p>
      </Section>
      <Section
        title="Development Experience" icon={<Icons.Github height="2rem" />}>
        <p> {firstText |> React.string} </p>
      </Section>
    </div>
  </div>;

let default = make;
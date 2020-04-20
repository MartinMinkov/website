module Style = {
  open Css;
  let indexContainer =
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
    <div className=Style.indexContainer>
      <Section
        title="Hey, I'm Martin - A software developer from Canada"
        subtitle=firstText
        icon={<Icons.Wave height="2rem" />}
      />
      <Section
        title="Development Experience"
        subtitle=firstText
        icon={<Icons.Github height="2rem" />}
      />
    </div>
  </div>;

let default = make;
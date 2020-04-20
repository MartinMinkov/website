let text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas sagittis, risus vel mollis interdum, nulla augue aliquet quam";

module Style = {
  open Css;
  let funfactsContainer =
    style([
      display(`grid),
      gridTemplateColumns([`fr(1.0), `fr(1.0)]),
      marginLeft(`rem(5.0)),
    ]);

  let funFactImage =
    style([width(`percent(80.0)), height(`percent(80.0))]);
};

[@react.component]
let make = () =>
  <div>
    <div>
      <Section
        title="Some fun facts about my hobbies!"
        icon={<Icons.Wave height="2rem" />}>
        <p> {text |> React.string} </p>
      </Section>
    </div>
    <div className=Style.funfactsContainer>
      <Section
        title="Olympic Weightlifting"
        subtitle=text
        icon={<Icons.Wave height="2rem" />}>
        <img src="static/images/img1.png" className=Style.funFactImage />
      </Section>
      <Section
        title="Programming"
        subtitle=text
        icon={<Icons.Github height="2rem" />}>
        <img src="static/images/img1.png" className=Style.funFactImage />
      </Section>
      <Section
        title="Web Development"
        subtitle=text
        icon={<Icons.Github height="2rem" />}>
        <img src="static/images/img1.png" className=Style.funFactImage />
      </Section>
      <Section title="BJJ" subtitle=text icon={<Icons.Github height="2rem" />}>
        <img src="static/images/img1.png" className=Style.funFactImage />
      </Section>
      <Section
        title="Video Games"
        subtitle=text
        icon={<Icons.Github height="2rem" />}>
        <img src="static/images/img1.png" className=Style.funFactImage />
      </Section>
      <Section
        title="Geocaching" subtitle=text icon={<Icons.Github height="2rem" />}>
        <img src="static/images/img1.png" className=Style.funFactImage />
      </Section>
    </div>
  </div>;

let default = make;
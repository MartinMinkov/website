let text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas sagittis, risus vel mollis interdum, nulla augue aliquet quam";

module Style = {
  open Css;
  let contactContainer = style([marginLeft(`rem(5.0))]);
};

[@react.component]
let make = () =>
  <div>
    <Section
      title="How to contact me"
      subtitle=text
      icon={<Icons.Wave height="2rem" />}
    />
    <div className=Style.contactContainer>
      <IconSection
        title="minkovlmartin@gmail.com"
        href="mailto:minkovlmartin@gmail.com"
        icon={<Icons.Mail height="2rem" />}
      />
      <IconSection
        title="linkedin.com/in/martinlminkov"
        href="https://www.linkedin.com/in/martinlminkov"
        icon={<Icons.LinkedIn height="2rem" />}
      />
      <IconSection
        title="twitter.com/Greenliketrees"
        href="https://www.twitter.com/Greenliketrees"
        icon={<Icons.Twitter height="2rem" />}
      />
      <IconSection
        title="Resume"
        href="/static/MartinMinkovResume.pdf"
        icon={<Icons.Resume height="2rem" />}
      />
    </div>
  </div>;

let default = make;
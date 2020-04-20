module Style = {
  open Css;
  let iconSectionContainer =
    merge([
      style([
        display(`flex),
        justifyContent(`flexStart),
        alignItems(`start),
      ]),
      "container",
    ]);

  let iconSectionTitle =
    merge([style([fontSize(Style.Sizes.medium)]), "title"]);

  let iconSectionIcon =
    merge([
      style([justifySelf(`center), marginRight(`rem(1.0))]),
      "icon",
    ]);
};

[@react.component]
let make =
    (
      ~title: string,
      ~icon: React.element=?,
      ~href: string=?,
      ~children: React.element=?,
    ) => {
  <section className="section is-fluid">
    <a href>
      <div className=Style.iconSectionContainer>
        <span className=Style.iconSectionIcon> icon </span>
        <h2 className=Style.iconSectionTitle>
          {title |> ReasonReact.string}
        </h2>
        children
      </div>
    </a>
  </section>;
};
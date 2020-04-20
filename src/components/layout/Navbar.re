open Style;

module Style = {
  open Css;

  let navBarBrand =
    merge([
      style([
        display(`flex),
        flexDirection(`column),
        justifyContent(`start),
        alignContent(`start),
        paddingLeft(`rem(2.0)),
      ]),
      "navbar-brand",
    ]);
  let navBarTitle =
    merge([
      style([fontSize(Sizes.large)]),
      "navbar-item",
      "title",
      "is-marginless",
      "is-paddless",
    ]);

  let navBarSubtitle =
    merge([style([fontSize(Sizes.small)]), "navbar-item", "subtitle"]);

  let navBarMenu =
    merge([
      style([fontSize(Sizes.small), paddingRight(rem(2.0))]),
      "navbar-menu",
    ]);
  let navBarItem =
    merge([
      style([
        fontSize(Sizes.small),
        fontWeight(`bold),
        paddingRight(rem(2.0)),
        display(`flex),
        justifyContent(`center),
        alignItems(`center),
        color(Colors.white),
      ]),
      "navbar-menu",
    ]);
};

let s = s => ReasonReact.string(s);

[@react.component]
let make = () =>
  <nav
    className="navbar is-primary"
    role="navigation"
    ariaLabel="main navigation">
    <div className=Style.navBarBrand>
      <h1 className=Style.navBarTitle> {s("Martin Minkov")} </h1>
      <h2 className=Style.navBarSubtitle>
        {s("Software Developer from Vancouver, Canada")}
      </h2>
    </div>
    <div className=Style.navBarMenu>
      <div className="navbar-end">
        <a className=Style.navBarItem href="/">
          <span className="icon"> <Icons.Home height="1.0rem" /> </span>
          <span> {s("Home")} </span>
        </a>
        <a className=Style.navBarItem href="/funfacts">
          <span className="icon"> <Icons.Fact height="1.0rem" /> </span>
          <span> {s("Fun Facts")} </span>
        </a>
        <a className=Style.navBarItem href="https://github.com/martinminkov/">
          <span className="icon"> <Icons.Github height="1.0rem" /> </span>
          <span> {s("Github")} </span>
        </a>
        <a className=Style.navBarItem href="/contact">
          <span className="icon"> <Icons.Contact height="1.0rem" /> </span>
          <span> {s("Contact")} </span>
        </a>
      </div>
    </div>
  </nav>;

let default = make;
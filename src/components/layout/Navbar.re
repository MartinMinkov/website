open Style;

module Style = {
  open Css;

  let navbarBrand =
    merge([
      style([
        display(`flex),
        flexDirection(`column),
        justifyContent(`start),
        alignContent(`start),
        paddingLeft(rem(2.0)),
      ]),
      "navbar-brand",
    ]);
  let navbarTitle =
    merge([
      style([fontSize(Sizes.large)]),
      "navbar-item",
      "title",
      "is-marginless",
      "is-paddless",
    ]);

  let navbarSubtitle =
    merge([style([fontSize(Sizes.small)]), "navbar-item", "subtitle"]);

  let navBarMenu =
    merge([
      style([fontSize(Sizes.small), paddingRight(rem(2.0))]),
      "navbar-menu",
    ]);
};

[@react.component]
let make = () =>
  <nav
    className="navbar is-primary"
    role="navigation"
    ariaLabel="main navigation">
    <div className=Style.navbarBrand>
      <h1 className=Style.navbarTitle>
        {"Martin Minkov" |> ReasonReact.string}
      </h1>
      <h2 className=Style.navbarSubtitle>
        {"Software Developer from Vancouver, Canada" |> ReasonReact.string}
      </h2>
    </div>
    <div className=Style.navBarMenu>
      <div className="navbar-end">
        <a className="navbar-item">
          <span className="icon"> <Icons.Home height="1.0rem" /> </span>
          <span> {"Home" |> ReasonReact.string} </span>
        </a>
        <a className="navbar-item">
          <span className="icon"> <Icons.Fact height="1.0rem" /> </span>
          <span> {"Fun Facts" |> ReasonReact.string} </span>
        </a>
        <a className="navbar-item">
          <span className="icon"> <Icons.Github height="1.0rem" /> </span>
          <span> {"Github" |> ReasonReact.string} </span>
        </a>
        <a className="navbar-item">
          <span className="icon"> <Icons.Contact height="1.0rem" /> </span>
          <span> {"Contact" |> ReasonReact.string} </span>
        </a>
      </div>
    </div>
  </nav>;

let default = make;
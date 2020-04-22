open Style;

module Style = {
  open Css;

  let navBar =
    merge([style([width(`percent(100.0))]), "navbar", "is-primary"]);

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

  let navBarBurger = (menuIsActive: bool) =>
    merge([
      {
        menuIsActive ? "is-active" : "";
      },
      "navbar-burger",
      "burger",
    ]);

  let navBarSubtitle =
    merge([style([fontSize(Sizes.small)]), "navbar-item", "subtitle"]);

  let navBarMenu = (menuIsActive: bool) =>
    merge([
      style([
        paddingTop(px(0)),
        fontSize(Sizes.small),
        paddingRight(rem(2.0)),
      ]),
      {
        menuIsActive ? "is-active" : "";
      },
      "navbar-menu",
    ]);

  let navBarItem =
    merge([
      style([
        paddingRight(rem(2.0)),
        display(`flex),
        justifyContent(`center),
        alignItems(`center),
        fontSize(Sizes.medium),
        letterSpacing(`px(1)),
      ]),
      "navbar-item",
    ]);

  let navBarLink = (menuIsActive: bool) =>
    if (menuIsActive) {
      style([
        fontWeight(`semiBold),
        color(Colors.black),
        paddingLeft(`rem(1.0)),
      ]);
    } else {
      style([
        fontWeight(`semiBold),
        color(Colors.white),
        paddingLeft(`rem(1.0)),
      ]);
    };
};

type state = {menuIsActive: bool};

type action =
  | ToggleMenu;

let initialState = {menuIsActive: false};

let reducer = (state, action) => {
  switch (action) {
  | ToggleMenu => {menuIsActive: !state.menuIsActive}
  };
};

let s = s => ReasonReact.string(s);

[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer(reducer, initialState);

  <div className="hero-head">
    <nav id="topnav" className=Style.navBar>
      <div className="container">
        <div className=Style.navBarBrand>
          <Next.Link href="/">
            <h1 className=Style.navBarTitle> {s("Martin Minkov")} </h1>
          </Next.Link>
          <h2 className=Style.navBarSubtitle>
            {s("Software Developer from Vancouver, Canada")}
          </h2>
          <span
            className={Style.navBarBurger(state.menuIsActive)}
            onClick={_event => dispatch(ToggleMenu)}>
            <span />
            <span />
            <span />
          </span>
        </div>
        <div id="navbarMenu" className={Style.navBarMenu(state.menuIsActive)}>
          <div className="navbar-end">
            <div className=Style.navBarItem>
              <span className="icon"> <Icons.Home height="4.0rem" /> </span>
              <Next.Link href="/">
                <a className={Style.navBarLink(state.menuIsActive)}>
                  {s("Home")}
                </a>
              </Next.Link>
            </div>
            <div className=Style.navBarItem>
              <span className="icon"> <Icons.Fact height="4.0rem" /> </span>
              <Next.Link href="/funfacts">
                <a className={Style.navBarLink(state.menuIsActive)}>
                  {s("Fun Facts")}
                </a>
              </Next.Link>
            </div>
            <div className=Style.navBarItem>
              <span className="icon"> <Icons.Github height="4.0rem" /> </span>
              <a
                className={Style.navBarLink(state.menuIsActive)}
                href="https://github.com/martinminkov/">
                {s("Github")}
              </a>
            </div>
            <div className=Style.navBarItem>
              <span className="icon"> <Icons.Contact height="4.0rem" /> </span>
              <Next.Link href="/contact">
                <a className={Style.navBarLink(state.menuIsActive)}>
                  {s("Contact")}
                </a>
              </Next.Link>
            </div>
          </div>
        </div>
      </div>
    </nav>
  </div>;
};
let default = make;
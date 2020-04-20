module Style = {
  let height = "1.0rem";
  let width = "1.0rem";
};

module Github = {
  [@bs.module "../../public/static/icons/github.svg"] [@react.component]
  external make: (~height: string) => React.element = "default";
};

module Contact = {
  [@bs.module "../../public/static/icons/contact.svg"] [@react.component]
  external make: (~height: string) => React.element = "default";
};

module Home = {
  [@bs.module "../../public/static/icons/home.svg"] [@react.component]
  external make: (~height: string) => React.element = "default";
};

module Resume = {
  [@bs.module "../../public/static/icons/cv.svg"] [@react.component]
  external make: (~height: string) => React.element = "default";
};

module Fact = {
  [@bs.module "../../public/static/icons/fact.svg"] [@react.component]
  external make: (~height: string) => React.element = "default";
};

module LinkedIn = {
  [@bs.module "../../public/static/icons/linkedin.svg"] [@react.component]
  external make: (~height: string) => React.element = "default";
};

module Twitter = {
  [@bs.module "../../public/static/icons/twitter.svg"] [@react.component]
  external make: (~height: string) => React.element = "default";
};

module Mail = {
  [@bs.module "../../public/static/icons/mail.svg"] [@react.component]
  external make: (~height: string) => React.element = "default";
};
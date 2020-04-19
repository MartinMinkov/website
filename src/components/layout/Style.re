module Colors = {
  let darkGrey = `hex("455a64");
  let mediumGrey = `hex("607d8b");
  let lightGrey = `hex("cfd8dc");
  let white = `hex("ffffff");
};

module Sizes = {
  let large = `rem(1.8); //18px
  let medium = `rem(1.2); //12px
  let small = `rem(0.8); //8px
};

module Control = {
  let defaults = () =>
    Css.(
      "html",
      [
        boxSizing(`borderBox),
        fontSize(pct(62.5)) // set default brosser size to 10px.
      ],
    );
};
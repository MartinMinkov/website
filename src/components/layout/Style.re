module Colors = {
  let lightBlue = `hex("bf4aa8");
  let darkBlue = `hex("12343b");
  let darkGrey = `hex("455a64");
  let mediumGrey = `hex("607d8b");
  let lightGrey = `hex("cfd8dc");
  let white = `hex("ffffff");
  let black = `hex("000000");
};

module Sizes = {
  let large = `rem(3.2); //18px
  let medium = `rem(1.8); //12px
  let small = `rem(1.2); //8px
};

module Control = {
  Css.(
    global(
      "html",
      [
        boxSizing(`borderBox),
        fontSize(`percent(62.5)) // set default brosser size to 10px.
      ],
    )
  );
  Css.(global("body", [minWidth(`fitContent)]));
};
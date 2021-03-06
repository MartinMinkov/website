// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE

import * as Css from "bs-css/src/Css.js";
import * as React from "react";
import * as Style$Website from "./Style.bs.js";

var sectionContainer = Css.merge(/* :: */[
      Css.style(/* :: */[
            Css.display(/* grid */-999565626),
            /* :: */[
              Css.gridTemplateColumns(/* :: */[
                    /* `rem */[
                      5691738,
                      1.0
                    ],
                    /* :: */[
                      /* `fr */[
                        22860,
                        1.0
                      ],
                      /* [] */0
                    ]
                  ]),
              /* :: */[
                Css.gridTemplateRows(/* :: */[
                      /* `minmax */[
                        -754859950,
                        /* tuple */[
                          /* `rem */[
                            5691738,
                            1.0
                          ],
                          /* `fr */[
                            22860,
                            1.0
                          ]
                        ]
                      ],
                      /* [] */0
                    ]),
                /* :: */[
                  Css.gridColumnGap(Css.rem(1.0)),
                  /* :: */[
                    Css.alignItems(/* start */67859554),
                    /* :: */[
                      Css.justifyContent(/* center */98248149),
                      /* [] */0
                    ]
                  ]
                ]
              ]
            ]
          ]),
      /* :: */[
        "container",
        /* [] */0
      ]
    ]);

var sectionText = Css.style(/* :: */[
      Css.display(/* flex */-1010954439),
      /* :: */[
        Css.flexDirection(/* column */-963948842),
        /* :: */[
          Css.justifyContent(/* spaceEvenly */-1016061555),
          /* [] */0
        ]
      ]
    ]);

var sectionSubtitle = Css.merge(/* :: */[
      Css.style(/* :: */[
            Css.fontSize(Style$Website.Sizes[/* medium */1]),
            /* [] */0
          ]),
      /* :: */[
        "subtitle",
        /* [] */0
      ]
    ]);

var sectionTitle = Css.merge(/* :: */[
      Css.style(/* :: */[
            Css.fontSize(Style$Website.Sizes[/* large */0]),
            /* [] */0
          ]),
      /* :: */[
        "title",
        /* [] */0
      ]
    ]);

var sectionIcon = Css.merge(/* :: */[
      Css.style(/* :: */[
            Css.justifySelf(/* center */98248149),
            /* [] */0
          ]),
      /* :: */[
        "icon",
        /* [] */0
      ]
    ]);

var Style = /* module */[
  /* sectionContainer */sectionContainer,
  /* sectionText */sectionText,
  /* sectionSubtitle */sectionSubtitle,
  /* sectionTitle */sectionTitle,
  /* sectionIcon */sectionIcon
];

function Section(Props) {
  var title = Props.title;
  var subtitle = Props.subtitle;
  var icon = Props.icon;
  var children = Props.children;
  return React.createElement("section", {
              className: "section is-fluid"
            }, React.createElement("div", {
                  className: sectionContainer
                }, React.createElement("span", {
                      className: sectionIcon
                    }, icon), React.createElement("div", {
                      className: sectionText
                    }, React.createElement("h1", {
                          className: sectionTitle
                        }, title), React.createElement("h2", {
                          className: sectionSubtitle
                        }, subtitle), children)));
}

var make = Section;

export {
  Style ,
  make ,
  
}
/* sectionContainer Not a pure module */

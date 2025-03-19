#ifndef SRC_J_CHAR_H
#define SRC_J_CHAR_H

typedef enum tag_J_Char {
    JC_XA, JC_A,
    JC_XI, JC_I,
    JC_XU, JC_U,
    JC_XE, JC_E,
    JC_XO, JC_O,
    JC_KA, JC_GA,
    JC_KI, JC_GI,
    JC_KU, JC_GU,
    JC_KE, JC_GE,
    JC_KO, JC_GO,
    JC_SA, JC_ZA,
    JC_SI, JC_ZI,
    JC_SU, JC_ZU,
    JC_SE, JC_ZE,
    JC_SO, JC_ZO,
    JC_TA, JC_DA,
    JC_TI, JC_DI,
    JC_XTU, JC_TU, JC_DU,
    JC_TE, JC_DE,
    JC_TO, JC_DO,
    JC_NA,
    JC_NI,
    JC_NU,
    JC_NE,
    JC_NO,
    JC_HA, JC_BA, JC_PA,
    JC_HI, JC_BI, JC_PI,
    JC_HU, JC_BU, JC_PU,
    JC_HE, JC_BE, JC_PE,
    JC_HO, JC_BO, JC_PO,
    JC_MA,
    JC_MI,
    JC_MU,
    JC_ME,
    JC_MO,
    JC_XYA, JC_YA,
    JC_XYU, JC_YU,
    JC_XYO, JC_YO,
    JC_RA,
    JC_RI,
    JC_RU,
    JC_RE,
    JC_RO,

    JC_WA,
    JC_N,
    JC__,    // ゝ
    JC___,   // ゞ
} J_Char;

putjc(J_Char jc);

#endif

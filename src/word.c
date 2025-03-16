#include "word.h"

#include <stdio.h>

void printJChar(JChar jc) {
    char str[4];
    str[3] = '\0';
    str[0] = 0xe3;
    switch(jc) {
    case JC_XA:
        str[1] = 0x82;
        str[2] = 0xa1;
        break;
    case JC_A:
        str[1] = 0x82;
        str[2] = 0xa2;
        break;
    case JC_XI:
        str[1] = 0x82;
        str[2] = 0xa3;
        break;
    case JC_I:
        str[1] = 0x82;
        str[2] = 0xa4;
        break;
    case JC_XU:
        str[1] = 0x82;
        str[2] = 0xa5;
        break;
    case JC_U:
        str[1] = 0x82;
        str[2] = 0xa6;
        break;
    case JC_VU:
        str[1] = 0x83;
        str[2] = 0xb4;
        break;
    case JC_XE:
        str[1] = 0x82;
        str[2] = 0xa7;
        break;
    case JC_E:
        str[1] = 0x82;
        str[2] = 0xa8;
        break;
    case JC_XO:
        str[1] = 0x82;
        str[2] = 0xa9;
        break;
    case JC_O:
        str[1] = 0x82;
        str[2] = 0xaa;
        break;
    case JC_KA:
        str[1] = 0x82;
        str[2] = 0xab;
        break;
    case JC_GA:
        str[1] = 0x82;
        str[2] = 0xac;
        break;
    case JC_KI:
        str[1] = 0x82;
        str[2] = 0xad;
        break;
    case JC_GI:
        str[1] = 0x82;
        str[2] = 0xae;
        break;
    case JC_KU:
        str[1] = 0x82;
        str[2] = 0xaf;
        break;
    case JC_GU:
        str[1] = 0x82;
        str[2] = 0xb0;
        break;
    case JC_KE:
        str[1] = 0x82;
        str[2] = 0xb1;
        break;
    case JC_GE:
        str[1] = 0x82;
        str[2] = 0xb2;
        break;
    case JC_KO:
        str[1] = 0x82;
        str[2] = 0xb3;
        break;
    case JC_GO:
        str[1] = 0x82;
        str[2] = 0xb4;
        break;
    case JC_SA:
        str[1] = 0x82;
        str[2] = 0xb5;
        break;
    case JC_ZA:
        str[1] = 0x82;
        str[2] = 0xb6;
        break;
    case JC_SI:
        str[1] = 0x82;
        str[2] = 0xb7;
        break;
    case JC_ZI:
        str[1] = 0x82;
        str[2] = 0xb8;
        break;
    case JC_SU:
        str[1] = 0x82;
        str[2] = 0xb9;
        break;
    case JC_ZU:
        str[1] = 0x82;
        str[2] = 0xba;
        break;
    case JC_SE:
        str[1] = 0x82;
        str[2] = 0xbb;
        break;
    case JC_ZE:
        str[1] = 0x82;
        str[2] = 0xbc;
        break;
    case JC_SO:
        str[1] = 0x82;
        str[2] = 0xbd;
        break;
    case JC_ZO:
        str[1] = 0x82;
        str[2] = 0xbe;
        break;
    case JC_TA:
        str[1] = 0x82;
        str[2] = 0xbf;
        break;
    case JC_DA:
        str[1] = 0x83;
        str[2] = 0x80;
        break;
    case JC_TI:
        str[1] = 0x83;
        str[2] = 0x81;
        break;
    case JC_DI:
        str[1] = 0x83;
        str[2] = 0x82;
        break;
    case JC_XTU:
        str[1] = 0x83;
        str[2] = 0x83;
        break;
    case JC_TU:
        str[1] = 0x83;
        str[2] = 0x84;
        break;
    case JC_DU:
        str[1] = 0x83;
        str[2] = 0x85;
        break;
    case JC_TE:
        str[1] = 0x83;
        str[2] = 0x86;
        break;
    case JC_DE:
        str[1] = 0x83;
        str[2] = 0x87;
        break;
    case JC_TO:
        str[1] = 0x83;
        str[2] = 0x88;
        break;
    case JC_DO:
        str[1] = 0x83;
        str[2] = 0x89;
        break;
    case JC_NA:
        str[1] = 0x83;
        str[2] = 0x8a;
        break;
    case JC_NI:
        str[1] = 0x83;
        str[2] = 0x8b;
        break;
    case JC_NU:
        str[1] = 0x83;
        str[2] = 0x8c;
        break;
    case JC_NE:
        str[1] = 0x83;
        str[2] = 0x8d;
        break;
    case JC_NO:
        str[1] = 0x83;
        str[2] = 0x8e;
        break;
    case JC_HA:
        str[1] = 0x83;
        str[2] = 0x8f;
        break;
    case JC_BA:
        str[1] = 0x83;
        str[2] = 0x90;
        break;
    case JC_PA:
        str[1] = 0x83;
        str[2] = 0x91;
        break;
    case JC_HI:
        str[1] = 0x83;
        str[2] = 0x92;
        break;
    case JC_BI:
        str[1] = 0x83;
        str[2] = 0x93;
        break;
    case JC_PI:
        str[1] = 0x83;
        str[2] = 0x94;
        break;
    case JC_HU:
        str[1] = 0x83;
        str[2] = 0x95;
        break;
    case JC_BU:
        str[1] = 0x83;
        str[2] = 0x96;
        break;
    case JC_PU:
        str[1] = 0x83;
        str[2] = 0x97;
        break;
    case JC_HE:
        str[1] = 0x83;
        str[2] = 0x98;
        break;
    case JC_BE:
        str[1] = 0x83;
        str[2] = 0x99;
        break;
    case JC_PE:
        str[1] = 0x83;
        str[2] = 0x9a;
        break;
    case JC_HO:
        str[1] = 0x83;
        str[2] = 0x9b;
        break;
    case JC_BO:
        str[1] = 0x83;
        str[2] = 0x9c;
        break;
    case JC_PO:
        str[1] = 0x83;
        str[2] = 0x9d;
        break;
    case JC_MA:
        str[1] = 0x83;
        str[2] = 0x9e;
        break;
    case JC_MI:
        str[1] = 0x83;
        str[2] = 0x9f;
        break;
    case JC_MU:
        str[1] = 0x83;
        str[2] = 0xa0;
        break;
    case JC_ME:
        str[1] = 0x83;
        str[2] = 0xa1;
        break;
    case JC_MO:
        str[1] = 0x83;
        str[2] = 0xa2;
        break;
    case JC_XYA:
        str[1] = 0x83;
        str[2] = 0xa3;
        break;
    case JC_YA:
        str[1] = 0x83;
        str[2] = 0xa4;
        break;
    case JC_XYU:
        str[1] = 0x83;
        str[2] = 0xa5;
        break;
    case JC_YU:
        str[1] = 0x83;
        str[2] = 0xa6;
        break;
    case JC_XYO:
        str[1] = 0x83;
        str[2] = 0xa7;
        break;
    case JC_YO:
        str[1] = 0x83;
        str[2] = 0xa8;
        break;
    }
}

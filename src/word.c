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
    case JC_A:////////////////////////////////////////////////////////
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
    }
}

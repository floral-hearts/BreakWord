#include "j-char.h"

void putjc(J_Char jc) {
    char js[4];
    js[0] = 0xe3;
    js[1] = jc < JC_MU ? 0x81 : 0x82;
    js[2] = jc < JC_MU ? jc + 0x81 : (jc - JC_MU) + 0x81;
    js[3] = 0x00;
    printf("%s", js);
    return;
}

#include "main.h"

int main(void) {
}

int key(void) {
#ifdef __linux__
    return getchar();
#elif _WIN32 || _WIN64
    return getch();
#endif
}

void changeKeyMode(void) {
#ifdef __linux__
    struct termios keyTermios;
    tcgetattr(0, &keyTermios);
    keyTermios.c_lflag &= ~ICANON;
    keyTermios.c_lflag &= ~ECHO;
    tcsetattr(0, TCSANOW, &keyTermios);
#endif
    return;
}

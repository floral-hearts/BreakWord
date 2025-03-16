#ifndef MAIN_H
#define MAIN_H

#ifdef __linux__
#include <termios.h>
#elif _WIN32 || _WIN64
#include <conio.h>
#endif

int main(void);
int key(void);
void changeKeyMode(void);

#endif

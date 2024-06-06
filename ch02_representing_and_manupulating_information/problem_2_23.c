#include <stdio.h>

#include "show_bytes.h"

int fun1(unsigned word) { return (int)((word << 24) >> 24); }

int fun2(unsigned word) { return ((int)word << 24) >> 24; }

int main(void) {
    int r1 = fun1(0x00000076);
    int r2 = fun2(0x00000076);

    int r3 = fun1(0x87654321);
    int r4 = fun2(0x87654321);

    int r5 = fun1(0x000000c9);
    int r6 = fun2(0x000000c9);

    int r7 = fun1(0xedcba987);
    int r8 = fun2(0xedcba987);

    show_bytes(&r1, sizeof(int));
    show_bytes(&r2, sizeof(int));

    show_bytes(&r3, sizeof(int));
    show_bytes(&r4, sizeof(int));

    show_bytes(&r5, sizeof(int));
    show_bytes(&r6, sizeof(int));

    show_bytes(&r7, sizeof(int));
    show_bytes(&r8, sizeof(int));
    return 0;
}
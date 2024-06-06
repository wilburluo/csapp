#include <stdio.h>
#include "show_bytes.h"

int main(void)
{
    unsigned  sx = 53191;
    unsigned  ix = sx;

    short sx1 = -12345;
    unsigned short usx1 = sx;
    int x = sx1;
    unsigned ux1 = usx1;

    printf("sx\t = %d:\t", sx);
    show_bytes(&sx, sizeof(unsigned short));
    printf("ix\t = %d:\t", ix);
    show_bytes(&ix, sizeof(unsigned int));

    printf("sx1\t = %d:\t", sx1);
    show_bytes(&sx1, sizeof(short));
    printf("usx1\t = %u:\t", usx1);
    show_bytes(&usx1, sizeof(unsigned short));
    printf("x\t = %d:\t", x);
    show_bytes(&x, sizeof(int));
    printf("ux1\t = %u:\t", ux1);
    show_bytes(&ux1, sizeof(unsigned));

    short sx2 = -12345;
    unsigned int uy = sx2;
    printf("uy\t = %u:\t", uy);
    show_bytes(&uy, sizeof(unsigned int));
    return 0;
}
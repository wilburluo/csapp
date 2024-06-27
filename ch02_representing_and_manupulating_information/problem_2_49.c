//
// Created by rowe on 24-6-27.
//
#include <stdio.h>

int main(void) {
    float f1 = 0x1p24; //2^24次方表示方法，用p或P
    float f2 = 0xap2;
    printf("0x1p24: %f\n", f1);
    printf("0x1p24 + 1: %f\n", f1 + 1.0f);
    printf("0xap2: %f\n", f2);
    return 0;
}

#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

#include "show_bytes.h"

int main(void) {
    show_int(12345);
    show_float(12345.0f);

    int x = -1;
    unsigned u = 2147483648;

    printf("x = %u = %d\n", x, x);
    printf("u = %u = %d\n", u, u);
    printf("%d\n", u - UINT32_MAX);
    int i1 = (-1 < 0U) ? 1 : 0;
    int i2 = (-1 < 0) ? 1 : 0;
    printf("%d\t%d\n", i1, i2);
    printf("%d\n", 0x80000000);

    printf("%u\n", 0u - 1);
    return 0;
}
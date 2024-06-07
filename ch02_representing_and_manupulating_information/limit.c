#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

int main() {
    printf("char bit = %d\n", CHAR_BIT);
    printf("sizeof int = %zu\n", sizeof(int));
    printf("int max = %d\n", INT_MAX);
    printf("int min = %d\n", INT_MIN);
    printf("int min = %u\n", INT_MIN);
    printf("-1 to unsigned= %u\n", -1);
    printf("-2 to unsigned= %u\n", -2);

    return 0;
}
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <limits.h>

int main()
{
    printf("char bit = %d\n", CHAR_BIT);
    printf("sizeof int = %zu\n", sizeof(int));
    printf("int max = %d\n", INT_MAX);
    return 0;
}
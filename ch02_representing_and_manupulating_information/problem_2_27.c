/*
 * Write a function with the following prototype:
 * Determine whether arguments can be added without overflow
 *       int uadd_ok(unsigned x, unsigned y);
 *This function should return 1 if arguments x and y can be added without
 *causing overflow.
 */
#include <stdio.h>

int uadd_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;
    return sum >= x;
}

int main(void) {
    printf("%d\n", uadd_ok(4294967295u, 0u));
    return 0;
}
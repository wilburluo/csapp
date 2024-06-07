/*
 *Write a function with the following prototype:
 *Determine whether arguments can be added without overflow
                int tadd_ok(int x, int y);
 *This function should return 1 if arguments x and y can be added without
 *causing overflow.
 */

#include <stdio.h>

int tadd_ok(int x, int y) {
    int sum = x + y;
    int positive_overflow = x >= 0 && y >= 0 && sum < 0;
    int negtive_overflow = x < 0 && y < 0 && sum >= 0;
    return !positive_overflow && !negtive_overflow;
}

int main(void) {
    printf("%d\n", tadd_ok(2147483647, 0));
    return 0;
}
/*
 *You are assigned the task of writing code for a function tsub_ok, with
 arguments *x and y, that will return 1 if computing x-y does not cause
 overflow. Having just *written the code for Problem 2.30, you write the
 following:
 * Determine whether arguments can be subtracted without overflow *
 *WARNING: This code is buggy.
    int tsub_ok(int x, int y) {
    return tadd_ok(x, -y);
    }
 *For what values of x and y will this function give incorrect results? Writing
 a *correct version of this function is left as an exercise (Problem 2.74).
 */

#include <limits.h>
#include <stdio.h>

int tadd_ok(int x, int y) {
    int sum = x + y;
    int positive_overflow = x >= 0 && y >= 0 && sum < 0;
    int negtive_overflow = x < 0 && y < 0 && sum >= 0;
    return !positive_overflow && !negtive_overflow;
}

int tsub_ok(int x, int y) { return tadd_ok(x, -y); }

int main(void) {
    printf("%d\n", tsub_ok(-2, INT_MAX));
    return 0;
}

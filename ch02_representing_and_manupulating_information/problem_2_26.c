/*You are given the assignment of writing a function that determines whether one
 *string is longer than another. You decide to make use of the string library
 *function strlen having the following declaration:
 * //Prototype for library function strlen
 *   size_t strlen(const char *s);
 * Here is your first attempt at the function:
        int strlonger(char *s, char *t) {
            return strlen(s) - strlen(t) > 0;
        }
*When you test this on some sample data, things do not seem to work quite
*right. You investigate further and determine that, when compiled as a 32-bit
*program, data type size_t is defined (via typedef) in header file stdio.h to be
*unsigned.
*
*A. For what cases will this function produce an incorrect result?
*B. Explain how this incorrect result comes about.
*C. Show how to fix the code so that it will work reliably.
 */

#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t) { return strlen(s) - strlen(t) > 0; }
int main(void) {
    int r = strlonger("a", "abc");
    printf("%d\n", r);
    return 0;
}

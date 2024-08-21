#include <stdio.h>

unsigned rightrotate(unsigned x, int n);

int main(void) {
    printf("%u", (unsigned)rightrotate((unsigned)8, (int)1));

    return 0;
}

/* rightrotate: rotate x to right by n bit positions */
unsigned rightrotate(unsigned x, int n) {
    int wordlength(void);
    unsigned rbit; /* rightmost bit */

    rbit = x << (wordlength() - n);

    x = x >> n;
    x = x | rbit;

    return x;
}

int wordlength(void) {
    int i;

    unsigned v = (unsigned)~0
    for (i = 1; (v = v >> 1) > 0; i++)
        ;

    return i;
}
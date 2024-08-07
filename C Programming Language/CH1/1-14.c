#include <stdio.h>

#define TOTAL_CHARS 128 /* Total Number of characters is 128: 0 - 127 */

int main(void) {
    int c, i, j;

    int char_arr[TOTAL_CHARS];

    for (i = 0; i < TOTAL_CHARS; ++i) {
        char_arr[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        char_arr[c] = char_arr[c] + 1;
    }

    for (i = 0; i < TOTAL_CHARS; ++i) {
        putchar(i);

        for (j = 0; j < char_arr[i]; ++j)
            putchar('*');

        putchar('\n');
    }
    return 0;
}
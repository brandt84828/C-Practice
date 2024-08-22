#include <stdio.h>

int lower(int c);

int main() {
    // Write C code here
    int n;;
    while ((n = getchar()) != EOF) {
        putchar(lower(n));
    }

    return 0;
}

int lower(int c) {
    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}
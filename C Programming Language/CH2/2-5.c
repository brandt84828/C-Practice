#include <stdio.h>

#define MAXLINE 1000

int mgetline(char line[], int lim);
int any(char s1[], const char s2[]);

int main(void) {
    char s1[MAXLINE], s2[MAXLINE];
    int val;

    mgetline(s1, MAXLINE);
    mgetline(s2, MAXLINE);

    val = any(s1, s2);

    printf("%d", val);

    return 0;
}

int mgetline(char line[], int lim) {
    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';

    return i;
}

int any(char s1[], const char s2[]) {
    int i, j;

    for (i = 0; s1[i] != '\0'; ++i) {
        for (j = 0; s2[j] != '\0'; ++j) {
            if (s1[i] == s2[j] && s1[i] != '\n') {
                return i;
            }
        }
    }

    return -1;
}

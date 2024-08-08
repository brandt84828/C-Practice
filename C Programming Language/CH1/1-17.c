#include <stdio.h>

int get_line(char [], int);

int main() {
    int len;
    char line[1000];
    while((len = get_line(line, 1000)) > 0)
        if (len > 80)
            printf("%s", line);
    return 0;
}


int get_line(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}
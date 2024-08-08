#include <stdio.h>

int get_line(char [], int);
int remove_trail(char []);

int main() {
    int len;
    char line[1000];
    while(get_line(line, 1000) > 0)
        if (remove_trail(line) > 0)
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

int remove_trail(char s[]) {
    int i;

    for (i = 0; s[i] != '\n'; ++i);
    --i; /* To consider raw line without \n, get last index */

    for (i > 0; ((s[i] == ' ') || (s[i] == '\t')); --i); 
    /* Removing the Trailing Blanks and Tab Spaces */

    if (i >= 0) /* Non Empty Line, add to back*/
    {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}
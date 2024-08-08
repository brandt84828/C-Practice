#include <stdio.h>

int get_line(char [], int);
void reverse(char []);

int main() {
    int len;
    char line[1000];
    while(get_line(line, 1000) > 0)
            reverse(line);
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

void reverse(char s[]) {
    int i, j;
    char temp;
    
    /*remove ending*/
    for (j = 0; s[j] != '\0'; ++j);
    --j;

    /*remove \n*/
    if (s[j] == '\n')
        --j;
    i = 0;
    
    while(i < j) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        ++i;
        --j;
    }
}
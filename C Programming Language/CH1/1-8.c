#include <stdio.h>

int main()
{   
    int c, blanks, tabs, newlines;
    blanks = tabs = newlines = 0;
    while((c = getchar()) != EOF)
        if (c == '\n')
            ++newlines;
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
    printf("NewLines : %d, Blanks : %d, Tabs : %d\n", newlines, blanks, tabs);
	return 0;
}
#include <stdio.h>

int main()
{   
    int c, blank;
    
    blank = 0;
    while((c = getchar()) != EOF) {
        if (c != ' ')
            blank = 0;
        if (!blank)
            putchar(c);
        if (c == ' ')
            blank = 1;
    }
    
	return 0;
}
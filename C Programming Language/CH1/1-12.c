#include <stdio.h>

#define IN  1    /* inside a word */
#define OUT 0    /* outside a word */

int main(void)
{
	int c;
	while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            printf("\n");
            //putchar('\n'); 
        else
            putchar(c);
	}

	return 0;
}

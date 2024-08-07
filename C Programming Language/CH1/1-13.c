#include <stdio.h>

#define TRUE  1    /* inside a word */
#define FALSE 0    /* outside a word */

int main(void)
{
	int c, i, j, count, interrupt;
	int ndigit[5];
	count = interrupt = 0;
	for(i = 0; i < 5; ++i)
	    ndigit[i] = 0;
	    
	while((c = getchar()) != EOF)
	    if (c == ' ' || c == '\n' || c == '\t')
	        interrupt = TRUE;
	    else
	        interrupt = FALSE;
	    
	    if (!interrupt)
	        ++count;
	    
	    if (interrupt)
	        if (count <= 5)
	            ++ndigit[0];
	        else if (count > 5 && count <= 10)
	            ++ndigit[1];
	        else if (count > 11 && count <= 15)
	            ++ndigit[2];
	        else if (count > 15 && count <= 20)
	            ++ndigit[3];
	        else
	            ++ndigit[4];
	       count = 0;
	    for (i = 0; i < 5; ++i) {
		    printf(" %i\t", ndigit[i]);
		    for (j = 0; j < ndigit[i]; ++j)
			    printf("*");
		    printf("\n");
	    }
	return 0;
}
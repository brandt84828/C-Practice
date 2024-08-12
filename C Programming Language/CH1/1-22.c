#include <stdio.h>

#define MAXLEN         1000    
#define LIMIT          9          /* maximum output line length */

int getLine(char [], int);
int skipBlanks(char [], int);
void foldLine(char [], char [], int);

int getLine(char s[], int lim)
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

int skip_blanks(char str[], int pos)
{
	while (str[pos] == ' ' || str[pos] == '\t')
		++pos;
	return --pos;
}

/* foldLine function: breaks line to a specified length limit and stores results in output */
void fold_line(char line[], char output[], int limit)
{
	int i;               /* position of currently read char */
	int nChar;           /* number of chars read from each fold point */
	int lastBlank;       /* position of the last whitespace */
	int inBlank;
	
	nChar = lastBlank = inBlank = 0;
	for (i = 0; line[i] != '\0'; ++i) {
		output[i] = line[i];
		++nChar;

		if (line[i] == ' ' || line[i] == '\t') {
			if (!inBlank)
				lastBlank = i;   /* keep track of the blank position */
			inBlank = 1;
		} else
			inBlank = 0;

		if (nChar >= limit && lastBlank != 0) { /* skip if no lastBank */
			output[lastBlank] = '\n'; /* break line (foldpoint) */
			i = lastBlank; /* read next charchter from foldpoint */
			i = skip_blanks(line, i); /* consume leading blanks after foldpoint */
			nChar = lastBlank = inBlank = 0; /* reset */
		}
	}
	output[i] = '\0';
}

int main(void)
{
	int  len;                 /* current line length */
	char line[MAXLEN];        /* current input line */
	char foldedLine[MAXLEN];  /* folded input line */

	while ((len = getLine(line, MAXLEN)) > 0) {
		if (len > LIMIT) {
			fold_line(line, foldedLine, LIMIT);
			printf("%s", foldedLine);
		} else	
			printf("%s", line);
	}
	return 0;
}
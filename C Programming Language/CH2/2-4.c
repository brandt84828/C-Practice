#include <stdio.h>

#define MAXLINE 1000

void del(char s1[], char s2[]);

int main(void) {
    char s1[MAXLINE] = {'h', 'a', 'p', 'p', 'y', '\0'};
    char s2[MAXLINE] = {'a', 'p', '\0'};

    del(s1, s2);

    printf("\n%s\n", s1);

    return 0;
}

void del(char s1[], char s2[]) {
    int i, j, k;
    k = 0;
    
    for (i = 0; s1[i] != '\0'; ++i){
        for(j = 0; (s1[i] != s2[j]) && s2[j] != '\0';++j)
            ;
        if (s2[j] == '\0')
            s1[k++] = s1[i];
    }
    
    s1[k] = '\0';
}
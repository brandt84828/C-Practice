#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while(celsius <= upper) {
        fahr = (celsius) * 9 / 5 + 32 ;
        printf("%7.0f\t%10.0f\n", celsius, fahr);
        celsius += step;
    }
    
    return 0;
}
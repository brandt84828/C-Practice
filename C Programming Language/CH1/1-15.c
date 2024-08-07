#include <stdio.h>

float f_to_c(float fahr);
float c_to_f(float celsius);

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while(fahr <= upper) {
        celsius = f_to_c(fahr);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        fahr += step;
    }
    
    printf("\n");
    
    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while(celsius <= upper) {
        fahr = c_to_f(celsius);
        printf("%7.0f\t%10.0f\n", celsius, fahr);
        celsius += step;
    }
    
    return 0;
}

float f_to_c(float fahr) {
    float celsius;
    celsius = (5.0/9.0) * (fahr-32.0);
    return celsius;
}

float c_to_f(float celsius) {
    float fahr;
    fahr = (celsius) * 9 / 5 + 32 ;
    
}
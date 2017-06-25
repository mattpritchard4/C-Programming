/* Write a program that prints its input one word per line. */

#include <stdio.h>

float celsius(float temp) {
    float cel;
    cel = (5.0 / 9.0) * (temp - 32.0);
    return cel;
}

int main() {
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf ("Temperature Conversion Table\n");
    printf ("  F\t C\n");

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, celsius(fahr));
        fahr = fahr + step;
    }
    return 0;
}

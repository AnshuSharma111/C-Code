#include <stdio.h>

// Program to convert from kilograms to pounds and vice versa

int main(){
    float a;
    printf("Enter value to convert: ");
    scanf("%f", &a);
    printf("%0.3f kgs = %0.3f lbs\n", a, a * 2.204);
    printf("%0.3f lbs = %0.3f kgs", a, a * 0.453);
    return 0;
}
#include <stdio.h>

// Program to convert inch to centimeters

int main(){
    float in, cm;
    printf("Enter value to convert: ");
    scanf("%f", &cm);
    in = cm * 2.54;
    printf("If entered value is in inches:\nIn inch: %0.3f in: %0.3f cm\n", cm, in);
    in = cm;
    cm = in / 2.54;
    printf("If entered value is in centimeters:\n%0.3f cm : %0.3f in", in, cm);
    return 0;
}
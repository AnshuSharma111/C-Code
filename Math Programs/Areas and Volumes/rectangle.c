#include <stdio.h>
#include <math.h>

// Program to find area and perimeter of rectangle or square

int main(){
    float l, b;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &l, &b);

    printf("The perimeter of the rectangle is: %0.2f\n", 2*(l+b));
    printf("The area of the rectangle is: %0.2f\n", l*b);
    printf("The diagonal of the rectangle is: %0.2f", sqrt(pow(l,2) + pow(b,2)));
    return 0;
}
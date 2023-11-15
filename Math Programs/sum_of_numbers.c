#include <stdio.h>

// Program to find sum of numbers within a given range

int main(){
    int lower, upper, sum = 0;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    for(lower; lower<upper; sum += lower, lower++);
    printf("The sum of the numbers in the given range is: %d", sum);
    return 0;
}
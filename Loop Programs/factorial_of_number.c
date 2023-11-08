#include <stdio.h>

// Program to find factorial of a number

int main(){
    int num, factorial = 1;
    printf("Enter number to find factorial: ");
    scanf("%d", &num);

    for(int i = 1; i<=num; i++)
    factorial *= i;

    printf("The factorial of number is: %d", factorial);
    return 0;
}
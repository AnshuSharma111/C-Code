#include <stdio.h>
#include <math.h>

// To print the reverse of a given integer

int main(){
    int number, reverse = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0){
        rem = number%10;
        reverse = (reverse * 10) + rem;
        number = number / 10;
    }
    printf("The reverse of the given number is: %d", reverse);
    return 0;
}
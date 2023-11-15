#include <stdio.h>
#include <math.h>

/* To check if entered integer is an armstrong number or not 
   Armstrong number is a number that is equal to the sum of its 
   digits raised to the power of the amount of digits*/

int main(){
    int number, copy_1, copy_2, arm=0, digits = 0, rem = 0;
    printf("Enter number you want to check is armstrong: ");
    scanf("%d", &number);

    copy_1 = number;
    copy_2 = number;

    while(copy_1>0){
        digits += 1;
        copy_1 = copy_1/10;
    }

    while(copy_2>0){
        rem = copy_2 % 10;
        arm += pow(rem, digits);
        copy_2 = copy_2 / 10;
    }

    printf("%d\t%d\n", number, arm);
    arm == number ? printf("It is an armstrong number!") : printf("It is not an armstrong number!");
    return 0;
}
#include <stdio.h>

int main(){
    int num, r_temp, r, rev=0;
    printf("Enter number to check palindromity of: ");
    scanf("%d", &num);

    r_temp = num;

    while (r_temp>0){
        r = r_temp%10;
        rev = rev*10 + r;
        r_temp = r_temp / 10;
    }

    rev == num ? printf("It is a palindrome!") : printf("It is not a palindrome!");
    return 0;
}
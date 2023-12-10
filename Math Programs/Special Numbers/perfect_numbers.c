#include <stdio.h>

// Program to find if given number is Perfect or not

int main(){
    int i = 1, sum = 0, n;
    printf("Enter number to find perfectness! : ");
    scanf("%d", &n);
    for(i; i<n; i++)
        if(n % i == 0)
            sum += i;

    if (sum == n)
        printf("The number is a perfect number!");
    else
        printf("The number is imperfect ;(");
    return 0;
}
#include <stdio.h>
#include <math.h>

// Program to check if a given number is kaprekar or not

int main(){
    int n, sq;
    printf("Enter the number: ");
    scanf("%d", &n);
    sq = n * n;

    int count=0, copy;
    copy = sq;
    while (copy>0){
        copy = copy / 10;
        count++;
    }

    int mid = count / 2;
    int n1=0, n2=0, i=0, digit;

    while (i < mid){
        digit = sq % 10;
        n1 += digit * pow(10, i);
        sq = sq/10;
        i++;
    }
    n2 = sq;
    if (n1 + n2 == n){
        printf("The number is a kaprekar number!");
    }
    else{
        printf("The number is not a kaprekar number!");
    }
}
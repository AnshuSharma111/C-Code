#include <stdio.h>
#include <stdlib.h>

// To calculate the n-th number of the fibonacci series

int fib(int n){
    if (n <= 1){ return 1;}
    return (fib(n-1) + fib(n-2));
}

int main(){
    int n, a=0, b=1, c;
    printf("Enter the position of the number you want to get: ");
    scanf("%d", &n);

    if (n == 1){
        printf("The n-th number of the fibonacci series is: %d", 0);
        exit(0);
    }
    if (n == 2){
        printf("The n-th number of the fibonacci series is: %d", 1);
        exit(0);
    }

    for(int i = 2; i<n; i++){
        c = a+b;
        a = b;
        b = c;
    }

    printf("The n-th number of the fibonacci series is: %d\n" , c);
    return 0;
}
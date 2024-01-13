#include <stdio.h>

// To calculate the n-th number of the fibonacci series

int main(){
    int n, a=0, b=1, c;
    printf("Enter the position of the number you want to get: ");
    scanf("%d", &n);

    for(int i = 2; i<n; i++){
        c = a+b;
        a = b;
        b = c;
    }

    printf("The n-th number of the fibonacci series is: %d" , c);
    return 0;
}
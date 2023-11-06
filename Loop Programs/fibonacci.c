#include <stdio.h>

// To print the fibonaaci series till a limit

int main(){
    int lim, a=0, b=1, c=0;
    printf("Enter till what number do you want to print the fibonacci series: ");
    scanf("%d", &lim);
    printf("%d\n", a);
    printf("%d\n", b);
    while (c <= lim){
        c = a+b;
        a =b;
        b =c;
        printf("%d\n", c);
    }
    return 0;
}
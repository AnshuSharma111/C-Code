#include <stdio.h>

int main(){
    int num, is_prime = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (int i = 2; i<= num/2; i++){
        if (num % i == 0){
            is_prime = 0;
        }
    }
    is_prime == 1 ? printf("Number is prime!") : printf("Number is not prime!");
    return 0;
}
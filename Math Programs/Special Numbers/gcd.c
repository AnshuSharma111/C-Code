#include <stdio.h>
#include <stdlib.h>

// Program to find GCD or HCF of numbers

int GCD(int a, int b){
    if (b == 0)
    return a;
    else
    GCD(b, a%b);
}

void find_gcd_all(int *arr, int size){
    int gcd = *arr;
    for (int i =0; i<size; i++){
        gcd = GCD(*(arr+i), gcd);
    }
    printf("\nThe GCD of the following values is: %d", gcd);
}

int main(){
    int size;

    printf("Enter number of numbers to find GCD of: ");
    scanf("%d", &size);

    int *arr = (int*) calloc(size, sizeof(int));

    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++)
    scanf("%d", arr+i);

    find_gcd_all(arr, size);

    free(arr);
    return 0;
}
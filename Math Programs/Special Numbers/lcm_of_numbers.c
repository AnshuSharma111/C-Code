#include <stdio.h>
#include <stdlib.h>

// Program to find Least Common Multiple of two numbers

int GCD(int a, int b){
    if (b == 0)
    return a;
    else
    GCD(b, a%b);
}

void lcm(int *arr, int size){
    int lcm = *arr, gcd = *arr;
    for (int i =0; i<size; i++){
        gcd = GCD(*(arr+i), lcm);
        lcm = (lcm * *(arr+i))/gcd;
    }
    printf("\nThe LCM of the following values is: %d", lcm);
}

int main(){
    int size;

    printf("Enter number of numbers to find LCM of: ");
    scanf("%d", &size);

    int *arr = (int*) calloc(size, sizeof(int));

    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++)
    scanf("%d", arr+i);

    lcm(arr, size);

    free(arr);
    return 0;
}
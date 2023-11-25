#include <stdio.h>
#include <stdlib.h>

// Program to find Least Common Multiple of two numbers

void lcm(int *arr, int size){
    int lcm, i=1, c=0;
    while(1>0){
        for(int j = 1; j<size; j++){
            if ((*arr * i) % *(arr + j) == 0)
            c++;
        }

        if (c == size-1){
            lcm = *arr * i;
            break;
        }
        i++;
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
    return 0;
}
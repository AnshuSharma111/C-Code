#include <stdio.h>
#include <stdlib.h>

// Program to find the largest and the smallest integer in an array

int main(){
    int l = -10000, s = 10000, size;
    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    int* arr = (int*) calloc(size, sizeof(int));

    printf("Enter the elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", arr+i);
    }

    for(int i = 0; i<size; i++){
        if (*(arr+i) < s)
        s = *(arr+i);
        if (*(arr+i) > l)
        l = *(arr+i);
    }

    printf("Largest: %d\nSmallest: %d", l, s);
    return 0;
}
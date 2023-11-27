#include <stdio.h>
#include <stdlib.h>

// Program to reverse an array

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(int* arr, int size){
    int *start, *end;
    start = arr;
    end = arr + size - 1;
    while(start < end){
        swap(start, end);
        start++;
        end--;
    }
}

int main(){
    int size, i=0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *arr = (int*) malloc(sizeof(int) * size);

    for(i; i<size; i++)
    scanf("%d", arr+i);

    reverse_array(arr, size);

    printf("Reversed array is: ");
    for(i=0; i<size; i++)
    printf("%d ", *(arr+i));

    return 0;
}
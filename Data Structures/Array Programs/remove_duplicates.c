#include <stdio.h>
#include <stdlib.h>

// Program to remove all duplicates from an array

void remove_duplicates(int *arr, int* size){
    int dec = 0;
    for(int i =0; i<*size; i++){
        for(int j = i+1; j<*size; j++){
            if (arr[i] == arr[j]){
                for(int k = j; k<*size;  k++){
                        arr[k-1] = arr[k];
                }
            }
        }
    }
    for (int i = 0; i<*size; i++){
        printf("%d\t", arr[i]);
    }
}

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *arr = (int*) malloc(sizeof(int) * size);

    for(int i =0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nAfter removing duplicates the array is: \n");
    remove_duplicates(arr, &size);
    return 0;
}
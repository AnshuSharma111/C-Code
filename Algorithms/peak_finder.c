#include <stdio.h>
#include <stdlib.h>

// Program to find peak of a given array

void peak_finder(int *arr, int size){

    if (*(arr) > *(arr + 1)){
        printf("Peak found at position 1 with value %d", *(arr));
        return;
    }

    for ( int i = 1; i<size-1 ; i++){
        if (*(arr + i) > *(arr + i + 1) && *(arr+i) > *(arr + i -1)){
            printf("Peak found at position %d with value %d", i+1, *(arr+i));
            return;
        }
    }

    if (*(arr + size - 1) > *(arr + size - 2)){
        printf("Peak found at position %d with value %d", size, *(arr+size-1));
        return;
    }
    
    printf("No peak found!");
}

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *arr = (int*) calloc(size, sizeof(int));

    printf("Enter elements to find peak of: ");
    for (int i = 0; i<size; i++)
    scanf("%d", arr+i);

    peak_finder(arr, size);

    free(arr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Program to remove all duplicates from an array

int remove_duplicates(int *arr, int* size){
    int unique[*size];
    int u_count = 0;
    
    int i=0, j=0, in_uniq = 0;
    
    for(i=0; i<*size; i++){
        in_uniq = 0;
        for(j=0; j<*size; j++){
            if (unique[j] == *(arr+i)){
                in_uniq = 1;
                break;
            }
        }
        
        if (in_uniq == 0){
            unique[u_count] = *(arr+i);
            u_count++;
        }
    }

    for(i = 0; i<u_count; i++)
    printf("%d ", unique[i]);
}

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *arr = (int*) malloc(sizeof(int) * size);
    int *uniq = (int*) malloc(sizeof(int) * size);

    printf("Enter array: ");
    for(int i =0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nAfter removing duplicates the array is: \n");
    remove_duplicates(arr, &size);

    return 0;
}
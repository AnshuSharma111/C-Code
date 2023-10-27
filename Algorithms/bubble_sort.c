#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = (int*) malloc(100 * sizeof(int));
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i =0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int temp;
    for(int i =0; i<size-1; i++){
        for (int j =0; j<size-i; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array in ascending order is: \n");
    for(int i = 0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}
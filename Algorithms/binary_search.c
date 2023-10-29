#include <stdio.h>
#include <stdlib.h>

// To find the position of an element in a sorted array

void sort_array(int *arr, int s){
    int temp;
    for(int i =0; i<s-1; i++){
        for (int j =0; j<s-i; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void binary_search(){

}
int main(){
    int *arr = (int*) malloc(100 * sizeof(int));
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    for(int i = 0; i<size; i++){
        scanf("%d", arr[i]);
    }

    sort_array(arr, size);
    return 0;
}
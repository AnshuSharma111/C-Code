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

int binary_search(int target, int* arr, int length){
   int pos, high = length -1, low = 0;
   while (high >= low){
        pos = (high + low)/2;
        if (arr[pos] == target){
            return pos+1;
        }
        else if (arr[pos] < target){
            low = pos+1;
        }
        else{
            high = pos-1;
        }
   }
   return -1; 
}

int main(){
    int *arr = (int*) malloc(100 * sizeof(int));
    int size, target;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    puts("Enter value to search for: ");
    scanf("%d", &target);
    sort_array(arr, size);
    printf("Sorted array is:\n");
    for(int i = 0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    int position = binary_search(target, arr, size);
    position == -1 ? printf("\nElement not in array!") : printf("\nThe value %d is present at %d", target, position);
    return 0;
}
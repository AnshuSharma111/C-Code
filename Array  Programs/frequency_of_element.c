#include <stdio.h>
#include <stdlib.h>

// To find the frequency of an element in an array

int frequency(int* arr, int ele, int size){
    int f = 0;
    for(int i = 0; i<size; i++){
        if (arr[i] == ele){
            f += 1;
        }
    }
    return f;
}
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *arr = (int*) malloc(sizeof(int) * size);

    for (int i = 0; i<size; i++)
    scanf("%d", &arr[i]);

    int ele, freq;
    printf("Enter element to find frequency of: ");
    scanf("%d", &ele);

    freq = frequency(arr, ele, size);
    printf("%d occurs %d times", ele, freq);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// All about 1D arrays

int main(){
    int *arr = (int*) malloc(100 * sizeof(int));
    int n;

    printf("Enter how many elements you want in the array : ");
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        printf("Enter element %d:", i+1);
        scanf("%d", &arr);
    }
    display(arr, n);
}

void display(int a[], int size){
    for(int i = 0; i<size; i++){
        printf("%d", a[i]);
    }
}
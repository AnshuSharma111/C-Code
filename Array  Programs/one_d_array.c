#include <stdio.h>
#include <stdlib.h>

// All about 1D arrays

void display(int array[], int size){
    printf("%d\n", size);
    for(int i = 0; i<size; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

// adding element to array
void append(int array[], int size){
    int position, value, temp;
    printf("Enter element you want to enter: ");
    scanf("%d", &value);
    printf("Enter position you want to enter element at: ");
    scanf("%d", &position);
    for(int i=size;i>=position-1;i--)
      array[i+1]=array[i];
    array[position-1]= value;
}

// Deletion of elements from array
void deletion(int array[], int size){
    int pos;
    printf("Enter index of element to delete: ");
    scanf("%d", &pos);
    for(int i = pos; i<size;  i++){
        array[i-1] = array[i];
    }
}
int main(){
    // Declaring an array that is of dynamic size using malloc()
    int *arr = (int*) malloc(100 * sizeof(int));
    int n;

    printf("Enter how many elements you want in the array : ");
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        printf("Enter element %d:", i+1);
        scanf("%d", &arr[i]);
    }

    int choice, out=0;
    while (out == 0){
        printf("What operation to perform on array?\n1) Display Array\n2) Add element to array\n3) Delete element from array\n4) Exit\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display(arr, n);
            break;
        case 2:
            append(arr, n+1);
            n += 1;
            break;
        case 3:
            deletion(arr, n);
            n -= 1;
            break;
        case 4:
            out = 1;
            break;
        default:
            printf("Invalid Choice!\n");
            break;
        }
    }
}
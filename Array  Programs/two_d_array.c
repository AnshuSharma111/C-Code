#include <stdio.h>
#include <stdlib.h>

void transpose(int *arr, int r, int c){
    
}

int main(){
    int *arr = (int*) malloc(100 * sizeof(int));
    int r,c, flag = 0, ch, size;

    puts("Enter number of rows in array: ");
    scanf("%d",&r);
    puts("Enter number of columns in array: ");
    scanf("%d",&c);

    size = r*c;
    for(int i = 0; i<size; i++)
        scanf("%d", &arr[i]);
    
    while (flag == 0){
        printf("Select operation to perform on 2-D array:\n1) Add another array\n2) Transpose\n3) Exit\nEnter Choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("In progress...\n");
                break;
            case 2:
                transpose(arr, r, c);
                break;
            case 3:
                flag = 1;
                break;
        }
    }
    return 0;
}
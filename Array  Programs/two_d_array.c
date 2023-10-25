#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int r, int c){
    for (int i=0; i<c*r; i++){
        printf("%d\t", arr[i]);
    }
}

int main(){
    int r,c;
    printf("Enter the number of rows you want: ");
    scanf("%d", &r);
    printf("\nEnter the number of columns you want: ");
    scanf("%d", &c);
    int *ptr = malloc(r*c * sizeof(int));
    for(int i =0; i<r*c; i++){
        scanf("%d",ptr[i]); 
    }
    printf("\n");
    display(ptr, r,c);
    free(ptr);
    return 0;
}
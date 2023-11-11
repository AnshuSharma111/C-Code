#include <stdio.h>

// Program to print a pyrimidal pattern

int main(){
    int size;
    printf("Enter size of pyramid base: ");
    scanf("%d", &size);

    int i,k,j;

    for(i=0; i<size; i++){
        for(k = size/2 +1; k<size-i; k++){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("*");
        }
        for(k = size/2 +1; k<size-i; k++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
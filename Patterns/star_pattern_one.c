// To print basic star patterns
#include <stdio.h>

int main(){
    int size;
    printf("Enter size of pattern to print: ");
    scanf("%d", &size);
    printf("Pattern one:\n\n");
    for(int i = 1; i<=size; i++){
        for(int j =i; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    printf("\nPattern two:\n\n");
    for(int i = size; i>=0; i--){
        for(int j = 0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\nPattern three:\n\n");
    for(int i = 1; i<=size; i++){
        for(int k =0; k<size-i; k++){
            printf(" ");
        }
        for(int j =i; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    printf("\nPattern four:\n\n");
    for(int i = 0; i<=size; i++){
        for(int k = i; k>0; k--){
            printf(" ");
        }
        for(int j =0; j<size-i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
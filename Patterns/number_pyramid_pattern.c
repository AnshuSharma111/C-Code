#include <stdio.h>

// Program to print a number pyramid pattern

int main(){
    int base;
    printf("Enter size of pyramid base: ");
    scanf("%d", &base);

    int height = (base / 2) + 1;

    int i = 0, j = 0, k =0, l =0;
    for(i; i < height; i++){
        int stars = 1 + 2*i;
        for(j = 0; j < (base - stars) / 2; j++){
            printf(" ");
        }
        for(k = 0; k<stars; k++){
            printf("%d", k);
        }
        for(l; l < (base - stars)/ 2; l++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
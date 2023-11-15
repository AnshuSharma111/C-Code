#include <stdio.h>

int main(){
    int num, lim;
    printf("Enter number you want to print the table of: ");
    scanf("%d", &num);
    printf("Enter till where do you want to print the table: ");
    scanf("%d", &lim);

    for(int i = 1; i<lim+1; i++){
        printf("%d X %d = %d\n", num, i, num*i);
    }

    return 0;
}
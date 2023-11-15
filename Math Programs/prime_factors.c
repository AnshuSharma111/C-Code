#include <stdio.h>
#include <stdlib.h>

// Program to find prime factors of a number

void find_prime_factors(int num){
    int *factors = (int*) malloc(sizeof(int) * 100);
    int flag = 0, count = 0, copy =num;
    for (int i=2; i<num; i++){
        if (num % i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        factors[0] = 1;
        factors[1] = num;
        printf("The factors are: ");
        for(int j = 0; j<2; j++){
            printf("%d\t", *(factors+j));
        }
    }
    else{
        while(num != 1){
            for(int t = 1; t<copy; t++){
                if (num % t == 0 && t != 1){
                    *(factors + count) = t;
                    count++;
                    num = num/t;
                }
            }
        }
        printf("The factors are: ");
        for(int j = 0; j<count; j++){
            printf("%d\t", *(factors+j));
        }
    }
    free(factors);
}

int main(){
    int num;
    printf("Enter number to find prime factors of: ");
    scanf("%d", &num);

    find_prime_factors(num);
    return 0;
}
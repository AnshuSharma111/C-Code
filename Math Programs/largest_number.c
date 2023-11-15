#include <stdio.h>
#include <stdlib.h>

// Program to find the largest number among n given numbers

int main(){
    int max = 0;
    printf("Keep entering numbers. Enter 0 to stop: ");
    int inp;
    while(1>0){
        scanf("%d", &inp);
        if (inp ==  0){
            break;
        }
        if (inp > max)
        max = inp;
    }

    printf("The largest number among the above is: %d", max);
    return 0;
}
#include <stdio.h>

// Program to check if the given year is leap or not and return the nearest leap year

int main(){
    int year, flag = 0;
    printf("Enter year: ");
    scanf("%d", &year);

    if( year % 100 == 0){
        if (year % 400 == 0){
            printf("Given year is a leap year!");
        }
        else{
            printf("Given year is a non-leap year");
            flag = 1;
        }
    }
    else if( year % 4 == 0){
        printf("Given year is a leap year!");
    }
    else{
        printf("Given year is a non-leap year");
        flag = 2;
    }

    if (flag == 1){
        printf("\nThe nearest leap year to the given year is %d", year + ((year/100)%4));
    }
    else if (flag == 2){
        printf("\nThe nearest leap year to the given year is %d",year + (year % 4));
    }
    return 0;
}
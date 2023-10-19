#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// To check if a given input is a palindrome or not

int main(){
    char inp[100], pal[100];

    gets(inp);
    strcpy(pal, inp);
    strrev(inp);

    if (strcmp(pal, inp) == 0){
        printf("It is a palindrome!");
    }
    else{ printf("Not a palindrome!");}
    return 0;
}
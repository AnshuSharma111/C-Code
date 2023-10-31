#include <stdio.h>
#include <string.h>

int main(){
    char s[100], a[100];
    puts("Enter string one: \n");
    gets(s);
    puts("Enter string two: \n");
    gets(a);

    strcat(s,a);
    printf("Concatenated String: \n");
    puts(s);
    return 0;
}
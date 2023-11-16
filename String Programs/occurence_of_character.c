#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// To find the number of a given character in a string

void occurence(char c, char *s, int len){
    int o = 0;
    for (int i = 0; i<len; i++){
        if (*(s+i) == (int)c)
        o++;
    }
    printf("\nThe number of times %c occured is %d", c, o);
}

int main(){
    char *s =  malloc(1024 * sizeof(char)), c;
    printf("Enter a string sequence: ");
    gets(s);
    s = realloc(s, strlen(s) + 1);

    printf("Enter character to count occurence of: ");
    scanf(" %c", &c);
    occurence(c, s, strlen(s));
    free(s);
    return 0;
}
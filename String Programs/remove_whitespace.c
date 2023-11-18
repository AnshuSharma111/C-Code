#include <stdio.h>
#include <stdlib.h>

// Program to remove whitespaces from a string

int main(){
    char *s = (char*) calloc(1024,sizeof(char));
    int c;
    printf("ENter string: ");
    scanf("%[^\n]%*c", s);
    printf("Enter character to remove: ");
    scanf("%d", &c);
    int i = 0;
    while(*(s+i) != '\0'){
        if ((int)*(s+i) == c){
            for(int j = i; *(s+j) != '\0'; j++){
                *(s+j) = *(s+j+1);
            }
        }
        i++;
    }
    printf("%s", s);
    return 0;
}
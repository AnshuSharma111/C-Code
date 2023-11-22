#include <stdio.h>
#include <stdlib.h>

// Program to switch the case of every character in a string

int main(){
    char *s = (char*) calloc(1024, sizeof(char));
    printf("Enter a string: ");
    scanf("%[^\n]%*c", s);
    
    int i = 0;
    while(*(s+i) != '\0'){
        if ((int)*(s+i) >= 65 && (int)*(s+i) < 91){
            *(s+i) = *(s+i) + 32;
        }
        else if ((int)*(s+i) >= 97 && (int)*(s+i) < 123){
            *(s+i) = *(s+i) - 32;
        }
        i++;
    }

    printf("%s", s);
    return 0;
}
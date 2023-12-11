#include <stdio.h>
#include <stdlib.h>

// Program to remove duplicates from a string

int main(){
    char *s = (char*) malloc(100 * sizeof(char));
    char *d = (char*) malloc(100 * sizeof(char));
    printf("Enter string: ");
    gets(s);
    
    int is_there = 0, len_d = 0;
    for(int i = 0; s[i] != 0; i++){
        is_there = 0;
        for(int j = 0; d[j] != 0; j++){
            if (s[i] == d[j]){
                is_there = 1;
                break;
            }
        }

        if (is_there == 0){
            d[len_d] = s[i];
            len_d++;
        }
    }

    printf("The unadulterated string is: ");
    d[len_d] = 0;
    puts(d);

    free(s);
    free(d);
    return 0;
}
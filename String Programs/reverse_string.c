#include <stdio.h>
#include <string.h>

char reverse_without_lib(char string[]){
    char reverse[100]; int i;
    for(i = 0; string[i] !=0; i++)
    reverse[i] = string[i];
    for(int k=0,j=i; j>=0; j--,k++){
        reverse[j] = string[k];
    }
    puts(reverse);
    printf("%s",reverse);
} 

char reverse_with_lib(char string[]){
    printf("%s",strrev(string));
}

int main(){
    char string[100]; int choice;
    printf("Enter string: ");
    gets(string);
    printf("Which conversion method to use:\n1) Without Library\n2) Library\nEnter Choice(1/2): ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
        reverse_without_lib(string);
        break;
        case 2:
        reverse_with_lib(string);
        break;
    }
    return 0;
}
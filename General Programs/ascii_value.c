#include <stdio.h>

// To print the ASCII value of value entered by user

void ascii_range_print(int a, int b){
    for(int i = a; i<=b; i++){
        printf("%4d%4c\n", i,i);
    }
}

void ascii_value(){
    char c;
    printf("Enter character to find ASCII value of: ");
    scanf(" %c", &c);
    printf("The ASCII value is: %d", c);
}

int main(){
    int ch, a, b; 
    printf("1) Get ASCII value of single character\n2) print all characters in an ASCII range\nChoice: ");
    scanf("%d", &ch);
    if (ch == 1){
        ascii_value();
    }
    else if(ch == 2){
        printf("Enter lower limit: ");
        scanf("%d", &a);
        printf("Enter upper limit: ");
        scanf("%d", &b);
        ascii_range_print(a,b);
    }
    else{
        printf("Inalid Input!");
    }
    return 0;
}
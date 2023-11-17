#include <stdio.h>

// To find nth term or sum of an AP

void nth_term(int a, int d, int n){
    printf("%d\n", (a + (n-1)*d));
}

void n_terms(int a, int d, int n){
    for (int i =1; i<=n; i++){
        printf("%d ", (a + ((i-1) * d)));
    }
    printf("\n");
}

int main(){
    int a, d, n;
    int flag = 0,choice;

    while(flag == 0){
        printf("1) find n-th term of AP\n2) Print first n terms of AP\n3) Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter first term of AP: ");
            scanf("%d", &a);
            printf("Enter common difference: ");
            scanf("%d", &d);
            printf("Which term to print: ");
            scanf("%d", &n);
            nth_term(a,d,n);
            break;
        case 2:
            printf("Enter first term of AP: ");
            scanf("%d", &a);
            printf("Enter common difference: ");
            scanf("%d", &d);
            printf("Which term to print till: ");
            scanf("%d", &n);
            n_terms(a,d,n);
            break;
        case 3:
            flag = 1;
            break;
        default:
            printf("Invalid Choice!\n");
            break;
        }
    }
    return 0;
}
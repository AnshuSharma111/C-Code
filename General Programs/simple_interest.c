#include <stdio.h>

// Program to calculate Dimple Interest

int main(){
    int choice, si, p, r, t;
    printf("What do you want to calculate?\n1) Simple Interest\n2) Rate\n3) Principal\n4) Time\nEnter Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter rate: ");
        scanf("%d", &r);
        printf("Enter principal value: ");
        scanf("%d", &p);
        printf("Enter time: ");
        scanf("%d", &t);

        printf("The Simple Interest is: %d", (p*r*t)/100);
        break;
    case 2:
        printf("Enter Simple Interest: ");
        scanf("%d", &si);
        printf("Enter principal value: ");
        scanf("%d", &p);
        printf("Enter time: ");
        scanf("%d", &t);

        printf("The Rate is: %d%", (si*100)/(p*t));
        break;
    case 3:
        printf("Enter Simple Interest: ");
        scanf("%d", &si);
        printf("Enter rate: ");
        scanf("%d", &r);
        printf("Enter time: ");
        scanf("%d", &t);

        printf("The principal value is: %d", (100*si)/(r*t));
        break;
    case 4:
        printf("Enter Simple Interest: ");
        scanf("%d", &si);
        printf("Enter principal value: ");
        scanf("%d", &p);
        printf("Enter rate: ");
        scanf("%d", &r);

        printf("The time is: %d", (100*si)/(r*p));
        break;
    default:
    printf("Invalid Choice!");
        break;
    }
    return 0;
}
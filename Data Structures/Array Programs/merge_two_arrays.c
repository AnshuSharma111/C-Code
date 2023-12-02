#include <stdio.h>
#include <stdlib.h>

int main(){
    int size1, size2;
    printf("Enter size of first array: ");
    scanf("%d", &size1);

    register int i = 0;

    int *a = (int*) calloc(size1, sizeof(int));
    printf("Enter first array elements: ");
    for(i; i<size1; i++)
    scanf("%d", a+i);

    printf("\nEnter size of second array: ");
    scanf("%d", &size2);

    int *b = (int*) calloc(size2, sizeof(int));
    printf("Enter elements of second array: ");
    for(i=0; i<size2; i++)
    scanf("%d", b + i);

    int* c = (int*) calloc(size1+size2, sizeof(int));
    for(i = 0; i<size1; i++)
    *(c+i) = *(a+i);

    for(int j = 0; j<size2; j++)
    *(c+i+j) = *(b+j);

    free(a);
    free(b);

    printf("The merged array is: ");
    for(i=0; i<size1+size2; i++)
    printf("%d ", *(c+i));

    free(c);
    return 0;
}
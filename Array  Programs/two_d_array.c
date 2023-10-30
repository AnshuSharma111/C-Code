#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[3][3], b[3][3], mul[3][3];

    printf("Enter array one: \n");
    for(int i =0; i<3; i++){
        for(int j= 0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter array two: \n");
    for(int i =0; i<3; i++){
        for(int j= 0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply
    for(int i=0;i<3;i++){    
        for(int j=0;j<3;j++){    
            mul[i][j]=0;    
            for(int k=0;k<3;k++){    
                mul[i][j]+=a[i][k]*b[k][j];    
            } 
       }    
    }

    for(int i =0; i<3; i++){
        for(int j= 0; j<3; j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
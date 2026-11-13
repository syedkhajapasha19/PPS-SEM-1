#include <stdio.h>
    int main (){

    int M[5],i,min;
    printf("Enter 5 numbers: ");

    for(i=0;i<5;i++)
        scanf("%d",&M[i]);

        for(i=0;i<5;i++)
        {
            if(M[i]<min)
        {
            min=M[i];
        }
        }
        printf("min=%d",min);
        return 0;
    }


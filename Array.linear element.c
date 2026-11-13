#include <stdio.h>
    void main (){

    int M[5],i,key,s=0;
    printf("Enter 5 values: ");

    for(i=0;i<5;i++)
        scanf("%d",&M[i]);

        printf("Enter the key value to be searched");
        scanf("&d",&key);
        for(i=0;i<5;i++)
        {
            if(key==M[i])
        {
            s=1;

            break;
        }
        }
        if(s==1)
        printf("element found at %d",i+1);
        else
            printf("element not found");
    }





#include <stdio.h>
    int main(){
        int S[5],i,product=1;

        printf("Enter 5 numbers: ");

        for(i=0;i<5;i++)
            scanf("%d",&S[i]);

        for(i=0;i<5;i++)
            product=product*S[i];

        printf("product=%d",product);

        return 0;
    }

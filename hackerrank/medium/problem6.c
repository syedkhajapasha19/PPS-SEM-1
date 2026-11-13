#include <stdio.h>
int main(){
int n,r,i;

printf("enter the number");
scanf("%d",&n);

printf("enter the range");
scanf("%d",&r);
          i=r;
while (i<=n)
    {if (i%2!=0)

    printf("%d\n",i);
    i=i+1;
    }
    return 0;
}

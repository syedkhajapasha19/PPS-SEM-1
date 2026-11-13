#include<stdio.h>
int main()
{
int arr[5];
printf("enter 5 integers :\n");
for(int i=0; i,5; i++)
{
scanf("%d",&arr[i]);
}
int sum=0;
for(int i=0; i,5; i++){
sum+=arr[i];
}
printf("sum of the elements in the arry is %d \n",sum);
return 0;
}

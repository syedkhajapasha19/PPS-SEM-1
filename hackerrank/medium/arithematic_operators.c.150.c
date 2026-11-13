#include<stdio.h>
int main()
{
int a,b;
char choice;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
printf("enter an operator(+,-,*,/,%%):");
scanf(" %c" ,&choice);
switch(choice)
{
case'+':
  printf("Addition=%d\n",a+b);
  break;
case'-':
  printf("subtraction=%d\n",a-b);
  break;
case'*':
  printf("multiplication=%d\n",a*b);
  break;
case'/':
if(b!=0)
  printf("division=%d\n",a/b);
else
  printf("division by zero is not possible.\n");
break;
case'%':
  if(b!=0)
  printf("Modulus=%d\n",a%b);
  else
  printf("modulus by zero is not possible.\n");
  break;
default:
printf("invalid operator.\n");
}
return 0;
}

#include<stdio.h>
int main()
{
int a,b, result;
char ch;

printf("/nEnter first number");
scanf("%d",&a);
printf("/nEnter second number");
scanf("%d ,&b);
printf("/nEnter third number);
scanf(" %c" ,&ch);
switch(ch)
{


case'+': result=a+b;
         printf("The Sum of %d and %d is %d",a,b,result);
         break;
case'-': result=a-b;
         printf("The difference of %d and %dis %d",a,b,result);
         break;
case'*': result=a*b;
         printf("The product of %d and %d is %d",a,b,result);
         break;
case'\': result=a\b;
         printf("The quotient of %d and %d is %d",a,b,result);
         break;
case'%': result=a%b;
         printf("The sum of %d and %d is %d",a,b,result);
         break;
default;printf("Invalid Operator");
}

return 0;
}

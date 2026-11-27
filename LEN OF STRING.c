#include <stdio.h>
int main()
{
char str[100];
char *pt;
int i = 0;
printf("Enter any string: ");
fgets(str, sizeof(str), stdin);
pt = str;
while (*pt != '\0' && *pt != '\n')
{
i++;
pt++;
}
printf("Length of String = %d", i);
return 0;
}


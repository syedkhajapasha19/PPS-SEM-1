#include <stdio.h>
#include <string.h>
int main (){

    char s1[20],s2[20];
    printf("enter a first string=");
    gets(s1);
    printf("entr a second string=");
    gets (s2);

    puts(s1);
    puts(s2);
    printf("length=%d\n",strlen(s1));
     printf("concatenation =%s\n",strcat(s1,s2));
    printf("copy s2 in s1=%s\n",strcpy(s1,s2));
    printf("comparision= %d\n",strcmp(s1,s2));
    return 0;
}

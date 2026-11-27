#include <stdio.h>
#include <string.h>
    int main()
    {
        char str1[100], str2[100];
        char *s1, *s2;
        printf("Enter 1st string: ");
        fgets(str1, sizeof(str1), stdin);
        printf("Enter 2nd string: ");
        fgets(str2, sizeof(str2), stdin);
            str1[strcspn(str1, "\n")] = '\0';
        str2[strcspn(str2, "\n")] = '\0';
    s1 = str1;
        s2 = str2;

        while (*s1 != '\0')
        s1++;

        while (*s2 != '\0')
        {
            *s1 = *s2;
            s1++;
            s2++;
            }
            *s1 = '\0';
            printf("Concatenated string: %s", str1);
        return 0;
            }

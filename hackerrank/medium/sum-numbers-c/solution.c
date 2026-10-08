#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i1, i2;
    float f1, f2;

    // 1. Read two integers and two floats from standard input
    scanf("%d %d", &i1, &i2);
    scanf("%f %f", &f1, &f2);

    // 2. Print integer sum and difference separated by a space
    printf("%d %d\n", i1 + i2, i1 - i2);

    // 3. Print float sum and difference scaled to 1 decimal place (%.1f)
    printf("%.1f %.1f\n", f1 + f2, f1 - f2);
    
    return 0;
    
}

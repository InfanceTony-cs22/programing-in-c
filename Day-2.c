#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    float f1;
    float f2;
    
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%f",&f1);
    scanf("%f",&f2);
    int intSum = num1+num2;
    int intDiff = num1-num2;
    float floatSum = f1+f2;
    float floatDiff = f1-f2;
    printf("%d %d\n", intSum, intDiff);
    printf("%.1f %.1f\n", floatSum, floatDiff);

    return 0;
}

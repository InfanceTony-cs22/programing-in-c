#include <stdio.h>

void incri(int*a,int*b)
{
int temp=*a; 
*a=*a+*b; 
*b=abs(temp-*b); 
}

int main()
{
int a, b;
int *pa=&a,*pb=&b;
scanf("%d",&a);
scanf("%d",&b);
incri(pa,pb);
printf("%d",a);
printf("\n%d",b);

    return 0;
}

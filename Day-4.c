#include<stdio.h>
#include<stdlib.h>

int max(int a,int b,int c,int d)
{
int maxi = a;
if (b>maxi) 
{
maxi=b;
}
if (c>maxi)
{
maxi=c;
}
if (d>maxi)
{
maxi=d;
}
return maxi;
}
int main()
{
int a;
int b;
int c;
int d;
int op;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
op=max(a,b,c,d);
printf("%d\n",op);
return 0;
}

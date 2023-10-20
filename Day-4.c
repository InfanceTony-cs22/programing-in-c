#include<stdio.h>
int max(int t,int o,int n,int y)
{
int tony=t;
if (o>tony) 
{
tony=o;
}
if (n>tony)
{
tony=n;
}
if (y>tony)
{
tony=y;
}
return tony;
}
int main()
{
int t;
int o;
int n;
int y;
int op;
scanf("%d",&t);
scanf("%d",&o);
scanf("%d",&n);
scanf("%d",&y);
op=max(t,o,n,y);
printf("%d\n",op);
return 0;

}


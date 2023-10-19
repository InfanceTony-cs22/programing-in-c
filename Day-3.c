#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
char s[50];
char tony[50];
scanf("%c",&ch);
scanf("%s",&s);
scanf("\n");
scanf("%[^\n]%*c",&tony);
printf("%c\n",ch);
printf("%s\n",s);
printf("%s\n",tony);


    
    return 0;
}

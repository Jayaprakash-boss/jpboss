#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 char s[100],i,c=0;
 gets(s);
 while(s[i]!='\0')
 {
    if((s[i]>=48&&s[i]<=57)||(s[i]>=97&&s[i]<=122)||(s[i]>=65&&s[i]<=90)||s[i]==' ')
    {        
        c=c;
    }
    else
    {
        c=c+1;
    }
    i++;
 }
 printf("%d",c);
 return 0;
}

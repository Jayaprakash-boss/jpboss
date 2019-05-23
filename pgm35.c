#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char c[50];
    int n,s=0,i,b;
    gets(c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
        if(isdigit (c[i]))
        {
        s++;
        }
    }
printf("%d",s);
    
}

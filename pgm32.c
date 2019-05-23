#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char b[50];
int i,n,m=1;
gets(b);
 n=strlen(b);
for(i=0;i<n;i++)
{
    if(b[i]==' ')
    {
        m++;
    }
    }
    printf("%d ",m);
}

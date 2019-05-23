#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
int a=0,i=0;

gets(s);
while(s[i]!='\0')
{
    if(s[i]==' ')
    
        i++;
        a++;
        i++;
    }
    printf("%d ",a);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char v[50];
int i=0,c=0;
gets(v);
 while(v[i]!='\0')
 {
     if(v[i]==' ')
        c++;
        i++;
    }
    printf("%d",v);
}

#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],i,d=0;
    //scanf("%[^\n]t",t);
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]=='.')
        {
            d=d+1;
        }
        i++;
    }
    d=d+1;
    printf("%d",d);
    return 0;
}

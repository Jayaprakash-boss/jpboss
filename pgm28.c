#include<stdio.h>
#include<ctype.h>
void main()
{
    int b,a[100],i;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        printf("%d %d\n",a[i],i);
    }
}

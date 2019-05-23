#include<stdio.h>
void main()
{
    int a,n;
    scanf("%d",&n);
    while(n>=60)
    {
        a++;
        n=n-60;
    }
    printf("%d %d",a,n);
    return 0;
}

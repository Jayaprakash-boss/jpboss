#include<stdio.h>
int main()
{
    int a,b,c,rem;
scanf("%d%d",&a,&b);
for(c=a+1;c<b;++c)
{
rem=c%2;
if(rem==0)
{
printf("%d ",c);
}
}
}

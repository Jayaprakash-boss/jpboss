#include <stdio.h>
int main()
{
 int a=1,b=1,n,i,c;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     printf("%d ",a);
     c=a+b;
     a=b;
     b=c;
 }
}

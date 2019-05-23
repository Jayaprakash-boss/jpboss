#include <stdio.h>
int main()
{
   int a,b,c,d,y,z;
   scanf("%d%d",&a,&d);
   scanf("%d%d",&b,&y);
   a=a-b;
   d=d-y;
   c=abs(a);
   z=abs(d);
   printf("%d %d",c,z);
   return 0;
}

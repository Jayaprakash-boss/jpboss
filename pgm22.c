#include<stdio.h>
void main()
{
int m,b[200],i,a;
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
a=b[0];

for(i=1;i<m;i++)
{
if(b[i]>a)
a=b[i];
}
printf("%d",a);
}

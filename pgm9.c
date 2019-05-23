#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[100],i,n,m,sum=0;
scanf("%d %d",&n,&m);
  if(m>n)
  {
  printf("Invalid");
   exit(1);
  }
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
 sum+=a[i];
}
printf("%d",sum);
getch();
}

#include <stdio.h>
int main()
{
  int max=0,a[10],i;
  for(i=0;i<10;i++)
  {
      scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<10;i++)
  {
      if(max<a[i])
      {
          max=a[i];
      }
  }
  printf("%d",max);
}

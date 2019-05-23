#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a,b,i;
 scanf("%d %d",&a,&b);
 if(a>=b)
 {
 printf("Invalid");
 exit(1);
 }
 for(i=a+1;i<b;i++)
 {
  if(i%2!=0)
  {
  printf("%d",i);
  if(i!=(b-1))
  printf(" ");
  }
 }
}

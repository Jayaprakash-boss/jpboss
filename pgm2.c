#include<stdio.h>
void main()
{
int num;
scanf("%d",&num);
if(num>=0)
{
  if(num%2==0)
  printf("Even");
  else
  printf("Odd");
}
else
  printf("Invalid");
}

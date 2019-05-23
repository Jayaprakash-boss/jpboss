#include<stdio.h>
#include<conio.h>
void main()
{
int val;
scanf("%d",&val);
if(val>=0)
{
  if(val%2==0)
  printf("Even");
  else
  printf("Odd");
}
else
  printf("Invalid");
}

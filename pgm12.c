#include <stdio.h>
int main(void)
{
	int a,b,c,sum=0;
	scanf("%d",&a);
b=a;
	while(a>0)
	{    
		c=a%10;    
		sum=(sum*10)+c;    
		a=a/10;    
	}   	
if (b==sum)
{
printf("yes");
}
else
{
printf("no");
}
    return 0;
}

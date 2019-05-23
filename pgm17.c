#include<stdio.h>
main()
{
int i,b,rem,mm,result;
scanf("%d",&b);
mm=b;
for(i=0;mm!=0;++i){
rem=mm%10;
result +=rem*rem*rem;
mm=mm/10;
}
if(result==b)
{
printf("yes");
}
else
{
printf("no");
}
}

#include <stdio.h>
int main()
{
    int i,m,sum=1;
    scanf("%d%d",&i,&m);
    while(m!=0)
    {
        
        sum=sum*i;
        m--;
    }
    printf("%d",sum);
    return 0;
}

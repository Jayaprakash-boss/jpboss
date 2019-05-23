#include <stdio.h>
int main()
{
    int b[20],i,a,j,size;
    scanf("%d",&size);
     for(i=0;i<size;i++)
    {   
        scanf("%d",&b[i]);
    }
    for(i=0;i<size;i++)
    {   
        for(j=0;j<size;j++)
        {
        if(b[i]<b[j])
        {
            a=b[i];
            b[i]=b[j];
            b[j]=a;
        }
        }
    }
    for(i=0;i<size;i++)
    {
    printf("%d ",b[i]);
    }
    return 0;
}

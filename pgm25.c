#include<stdio.h>
void main()
{
    int arr[100],a,i,j,temp,mid;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    mid=a/2;
    printf("%d",arr[mid]);
    
    }

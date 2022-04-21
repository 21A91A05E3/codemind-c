#include<stdio.h>
int main()
{
    int n,scale[10],i,j,found=0,min=9999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&scale[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min>scale[i])
        {
            min=scale[i];
        }
    }
    for(i=min;i>=1;i--)
    {
        found=0;
        for(j=0;j<n;j++)
        {
            if(scale[j]%i!=0)
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
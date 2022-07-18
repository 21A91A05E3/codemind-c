#include<stdio.h>
int main()
{
    int n1,n2,a[100],b[100],i,k,c=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n1;i++)
    {
        if(a[i]<k &&  b[i]<k)
        {
            continue;
        }
        else if(a[i]>k)
        {
            continue;
        }
        else
        {
            c+=1;
        }
    }
    printf("%d",c);
}
#include<stdio.h>
int main()
{
    int a[3],b[3],l=0,o=0,i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            l++;
        }
        else if(a[i]<b[i])
        {
            o++;
        }
        else
        {
            continue;
        }
    }
    printf("%d %d",l,o);
}
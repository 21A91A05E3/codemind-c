#include<stdio.h>
int main()
{
    int h,n,i,a[n],j,t,c=0;
    scanf("%d",&h);
    while(h--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    c+=1;
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        if(c==0)
        {
            printf("%d",0);
        }
        else
        {
            printf("%d",a[n-1]-a[0]);
        }
        printf("
");
    }
}
#include<stdio.h>
int main()
{
    int n,t,i,a[1000],b[1000],k=0,c=0,j,s=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        c=0;
        b[1000]={0};
        k=0;
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=i+1;j<n;j++)
            {
                if(i!=j)
                {
                    s=a[i]+a[j];
                    b[k]=s;
                    k+=1;
                }
                
            }
        }
        for(i=0;i<k;i++)
        {
            for(j=0;j<n;j++)
            {
                if(b[i]==a[j])
                {
                    c+=1;
                }
            }
        }
        if(c!=0)
        printf("%d
",c);
        else
        printf("-1
");
    }
}
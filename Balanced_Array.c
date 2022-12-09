#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,c=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int j,k;
        for(j=0;j<n;j++)
        {
            int l=0,r=0;
            for(k=0;k<j;k++)
            {
                l+=a[k];
            }
            for(k=j+1;k<n;k++)
            {
                r+=a[k];
            }
            if(l==r)
            c+=1;
        }
        if(c)
        printf("YES");
        else
        printf("NO");
        printf("
");
    }
}
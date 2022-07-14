#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,a[100],j,c=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]%2==1)
            {
                c+=1;
            }
        }
        printf("%d
",c/2);
    }
}
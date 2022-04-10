#include <stdio.h>
int main() 
{
    int n,i,j,l,s=0,e;
    scanf("%d", &n);
    l=2*n-1;
    e=l-1;
    int a[l][l];
    while(n)
    {
        for(i=s;i<=e;i++)
        {
            for(j=s;j<=e;j++)
            {
                if(i==s || i==e || j==s || j==e)
                {
                    a[i][j]=n;
                }
            }
        }
        s++;;
        e--;
        n--;
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("
");
    }
}

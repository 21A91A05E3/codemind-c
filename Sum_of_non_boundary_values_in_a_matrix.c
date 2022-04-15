#include<stdio.h>
int main()
{
    int r,c,a[1000][1000],i,j,s,er,ec,res=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    s=0;
    er=r-1;
    ec=c-1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==s || i==er ||j==s ||j==ec)
            {
                continue;
            }
            else
            {
                res=res+a[i][j];
            }
            
        }
    }
    printf("%d",res);
    
}
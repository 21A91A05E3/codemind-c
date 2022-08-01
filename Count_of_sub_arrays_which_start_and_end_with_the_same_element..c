#include<stdio.h>
int main()
{
    int n,i,a[1000],j,c,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
              c+=1;  
            }
            
        }
        if(c==2)
        {
            m+=1;
        }
    }
    printf("%d",m+n);
}
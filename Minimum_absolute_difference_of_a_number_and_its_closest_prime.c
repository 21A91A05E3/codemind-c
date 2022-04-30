#include<stdio.h>
#include<math.h>
int main()
{
    int m=0,i,d,n,c=0,j,a[1000],b[1000],p,k=0;
    
        k=0;
        m=0;
        scanf("%d",&n);
        for(i=0;i<n+100;i++)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                    c++;
            }
            if(c==2)
            {
                a[k]=abs(n-i);
                b[k]=i;
                m++;
                k++;
            }
        }
        d=a[0];
        for(i=0;i<m;i++)
        {
            if(d>a[i])
            {
                d=a[i];
            }
        }
    printf("%d",d);
}
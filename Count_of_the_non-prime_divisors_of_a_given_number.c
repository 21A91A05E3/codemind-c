#include<stdio.h>
int main()
{
    int n,i,c=0,j,dc=0,pc=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            pc++;
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                dc++;
            }
        }
    }
    printf("%d",pc-dc);
}
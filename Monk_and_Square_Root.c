#include<stdio.h>
int main()
{
    long long int n,a,b,i,r,j;
    scanf("%lld",&n);
    while(n>0)
    {
        r=-1;
        scanf("%lld%lld",&a,&b);
        for(j=0;j<b;j++)
        {
            if((j*j)%b==a)
            {
                r=j;
                break;
            }
        }
        printf("%lld
",r);
        n--;
    }
}
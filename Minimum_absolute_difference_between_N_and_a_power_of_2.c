#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,r,d1,d2,d;
    scanf("%d",&n);
    l=pow(2,floor(log2(n)));
    r=l*2;
    d1=abs(n-l);
    d2=abs(r-n);
    if(d1<=d2)
    {
        d=d1;
    }
    else
    {
        d=d2;
    }
    printf("%d",d);
}
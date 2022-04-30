#include<stdio.h>
#include<math.h>
int absdif(int n,int k)
{
    int s,e,r=1,d,t,i=0,c=0;
    t=n;
    while(i<k)
    {
        r=r*10;
        i++;
    }
    e=n%r;
    while(n)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    n=t;
    while(c!=k)
    {
        n=n/10;
        c--;
    }
    s=n;
    return abs(s-e);
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",absdif(n,k));
}
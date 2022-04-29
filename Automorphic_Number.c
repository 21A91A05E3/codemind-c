#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,s,p,c=0,l;
    scanf("%d",&n);
    t=n;
    s=n*n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    n=t;
    p=pow(10,c);
    l=s%p;
    if(l==n)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}
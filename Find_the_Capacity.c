#include<stdio.h>
int main()
{
    int s,t,b,r,c;
    scanf("%d%d%d",&s,&t,&b);
    r=2*s*t*b*512;
    c=r/1024;
    printf("%dKB",c);
    
}
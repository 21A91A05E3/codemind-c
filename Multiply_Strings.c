#include<stdio.h>
#include<stdlib.h>
int main()
{
    char x[100],y[100];
    long long int a,b;
    scanf("%s%s",x,y);
    a=atoi(x);
    b=atoi(y);
    printf("%lld",a*b);
}
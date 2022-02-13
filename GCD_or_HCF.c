#include<stdio.h>
int main()
{
    int a,b,i=1,h;
    scanf("%d%d",&a,&b);
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0)
        {
            h=i;
        }
        i++;
    }
    printf("%d",h);
}
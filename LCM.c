#include<stdio.h>
int main()
{
    int a,b,max,l=1,i;
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    for(i=max;;i=i+max)
    {
        if(i%a==0 && i%b==0)
        {
            l=i;
            break;
        }
    }
    printf("%d",l);
}
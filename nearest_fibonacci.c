#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,s=0;
    while(s<n)
    {
        s=a+b;
        a=b;
        b=s;
    }
    if(abs(n-s)==abs(n-a))
    {
        printf("%d %d",a,s);
    }
    else if(abs(n-s)<abs(n-a))
    {
        printf("%d",s);
    }
    else
    {
        printf("%d",a);
    }
}
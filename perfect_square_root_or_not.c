#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=sqrt(n);
    if(a*a==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    s=sqrt(n);
    if(s*s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
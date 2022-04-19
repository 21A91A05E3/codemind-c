#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<n/2;i++)
    {
        if(i*(i+1)==n)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}
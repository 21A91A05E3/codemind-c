#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x[100],s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        s[i]=sqrt(x[i]);
        if(s[i]*s[i]==x[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}
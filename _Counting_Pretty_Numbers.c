#include<stdio.h>
int main()
{
    int t,a,b,i,j,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        c=0;
        for(j=a;j<=b;j++)
        {
            if(j%10==2||j%10==3||j%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}
#include<stdio.h>
int main()
{
    int i,t,a[100],b[100],c[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        c[i]=a[i]+b[i];
    }
    for(i=0;i<t;i++)
    {
        printf("%d
",c[i]);   
    }
}
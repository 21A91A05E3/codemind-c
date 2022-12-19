#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d",0);
    }
    else if(n<=2){
        printf("%d",n);
    }
    else{
        int i,a=1,b=1,c=2,s=0;
    for(i=3;i<=n;i++)
    {
        s=a+b+c;
        a=b;
        b=c;
        c=s;
    }
    printf("%d",s);
    }
}
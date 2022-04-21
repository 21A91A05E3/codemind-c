#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r;
    double c;
    scanf("%d%d%d",&p,&r,&t);
    c=(p)*pow((1+(r/100.0)),t);
    printf("%.2lf",c);
    
}
#include<stdio.h>
int main()
{
int n,c=0,i;
char str[20];
scanf("%d",&n);
while(n)
{
scanf("%s",str);
c=0;
for(i=0;str[i]!=NULL;i++)
{
    if(str[i]<'0' || str[i]>'9')
    {
    c=1;
    break;
    }
}
if(c==1)
printf("False
");
else
printf("True
");
n--;
}
}
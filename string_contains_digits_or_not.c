#include<stdio.h>
int main()
{
    char a[100];
    int s=0,i,t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%s",a);
        s=0;
        for(i=0;a[i]!=NULL;i++)
        {
            if(a[i]>=48 && a[i]<=57)
            {
                s++;
            }
        }
        if(s==0)
        {
            printf("No
");
        }
        else
        {
            printf("Yes
");
        }
    t--;
    }
}
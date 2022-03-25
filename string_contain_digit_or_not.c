#include<stdio.h>
int main()
{
    char a[1000];
    int s=0,i;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            s++;
        }
    }
    if(s!=0)
    {
        printf("Contains %d digit",s);
    }
    else
    {
        printf("Doesn't contain digit");
    }
}
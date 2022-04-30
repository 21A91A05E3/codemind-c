#include<stdio.h>
int main()
{
    char str[100];
    int i,c=1;
    scanf("%s",str);
    for(i=1;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        c++;
    }
    printf("%d",c);
}
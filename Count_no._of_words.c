#include<stdio.h>
int main()
{
    char str[1000];
    int dc=0,i;
    scanf("%[^
]",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            dc++;
        }
    }
    printf("%d",dc+1);
}
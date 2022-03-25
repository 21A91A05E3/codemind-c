#include<stdio.h>
int main()
{
    char str[1000],ch;
    int i,c=0;
    scanf("%[^
]s",str);
    scanf("%s",&ch);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==ch)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",c);
    }
    
}
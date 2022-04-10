#include<stdio.h>
int main()
{
    char str[1000];
    int i,max=0;
    scanf("%[^
]",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>max)
        {
            max=str[i];
        }
    }
    printf("%c",max);
    
}
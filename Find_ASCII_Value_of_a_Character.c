#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char str[100];
    scanf("%[^
]s",&str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        printf("%d",str[i]);
    }
}
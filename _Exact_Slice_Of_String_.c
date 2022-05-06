#include<stdio.h>
int main()
{
    int a,b,i;
    char s[100];
    scanf("%[^
]s",s);
    scanf("%d%d",&a,&b);
    for(i=a;i<b+1;i++)
    {
        printf("%c",s[i]);
    }
}

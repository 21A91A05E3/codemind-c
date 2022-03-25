#include<stdio.h>
int main()
{
    char a[100];
    int s=0,i;
    scanf("%[^
]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            s=s+(a[i]-48);
        }
    }
    printf("%d",s);
    
}
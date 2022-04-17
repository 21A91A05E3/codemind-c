#include<stdio.h>
int main()
{
    char s[100],i,c=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if((s[i]>=33&&s[i]<=47)||(s[i]>=58&&s[i]<=64)||(s[i]>=91&&s[i]<=96)
        ||(s[i]>=123&&s[i]<=126))
        {
            c++;
        }
      
    }
    printf("%d",c);
}
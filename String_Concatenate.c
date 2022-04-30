#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100],s2[100],temp;
    int len,i,j;
    scanf("%[^
]s",s);
    scanf(" %[^
]s",s1);
    strcat(s,s1);
    strcpy(s2,s);
    len=strlen(s2);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(s2[i]>s2[j])
            {
                temp=s2[i];
                s2[i]=s2[j];
                s2[j]=temp;
            }
        }
    }
    printf("%s",s2);
}
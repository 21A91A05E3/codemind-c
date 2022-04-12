#include<stdio.h>
int main()
{
    char str[1000];
    int i,dc=0,sc=0,vc=0,cc=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            dc++;
        }
        else if(str[i]==32)
        {
            sc++;
        }
        else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vc++;
        }
        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vc++;
        }
        else
        {
            cc++;
        }
    }
    printf("Vowels: %d",vc);
    printf("
Consonants: %d",cc);
    printf("
Digits: %d",dc);
    printf("
White spaces: %d",sc);
}
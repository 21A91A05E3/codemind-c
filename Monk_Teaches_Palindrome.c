#include<stdio.h>
#include<string.h>
void stringrev(char *str)
{
	char temp;
	int i,j,len;
	len=strlen(str);
	i=0;
	j=len-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
}
int main()
{
    int t,n,l,i;
    scanf("%d",&t);
    while(t--)
    {
        char st1[100],st2[100];
        scanf("%s",st1);
        strcpy(st2,st1);
        stringrev(st1);
        for(i=0;st1[i]!=NULL;i++)
        n=strcmp(st1,st2);
        l=strlen(st1);
        if(n==0)
        {
            printf("YES ");
            if(l%2==0)
            printf("EVEN");
            else
            printf("ODD");
        }
        else
        {
            printf("NO");
        }
        printf("
");
    }
}

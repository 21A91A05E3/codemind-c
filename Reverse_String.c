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
	char str[100];
	scanf("%[^
]s",str);
	stringrev(str);
	printf("%s",str);
}
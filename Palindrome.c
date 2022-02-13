#include<stdio.h>
int main()
{
	int n,d,s=0,temp;
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		d=n%10;
		s=(s*10)+d;
		n=n/10;
	}
	if(temp==s)
	{
		printf("True");
	}
	else
	{
		printf("False");
		
	}		
}
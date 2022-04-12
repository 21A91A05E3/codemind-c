#include<stdio.h>
int main()
{
    int n,d,temp,s=0,p=1;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
    	d=n%10;
    	n=n/10;
    	s=s+d;
	}
	n=temp;
	while(n)
    {
    	d=n%10;
    	n=n/10;
    	p=p*d;
	}
	if(p==s)
	{
		printf("Spy Number");
	}
	else
	{
		printf("Not Spy Number");
	}
	return 0;
}
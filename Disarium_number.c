#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,d1,dc=0,temp,r=0,s=0;
	scanf("%d",&n);
	temp=n;
	while(n) 
	{
		d=n%10; 
		n=n/10; 
		r=(r*10)+d;  
	}
	while(r) 
	{
		d1=r%10; 
		r=r/10; 
		dc++;  
		s=s+pow(d1,dc);
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
#include<stdio.h>
int main()
{
	int i,n,a[100],c=0,dc=0,j,k;
	scanf("%d",&n);      
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);   
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)    
	{ 	
		c=0;
		if(a[i]<=k)
		{
			for(j=1;j<=a[i];j++)
			{
				if(a[i]%j==0)    
				{
					c++;
				}
			}
			if(c==2)
			{
				dc++;
			}	
		}
	}
	printf("%d ",dc);
}
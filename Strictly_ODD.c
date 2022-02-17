#include<stdio.h>
int main()
{
	int n,i,arr[1000],eic=0,edc=0;
	scanf("%d",&n); //4
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);   // 2 4 6 8	
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		{
			edc++;	
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		{
			if(i%2==1)
			{
				eic++;
			}
		}
	}
	if(eic==edc)
	{
		printf("True");
		
	}
	else
	{
		printf("False");
		
	}		
}


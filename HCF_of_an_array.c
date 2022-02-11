#include<stdio.h>
int main()
{
    int n,i,j,arr[100],hcf;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    hcf=arr[0];
    j=1;
    while(j<n)
    {
        if(arr[j]%hcf==0)
        {
            j++;
        }
        else
        {
            hcf=arr[i]%hcf;
            i++;
        }
    }
    printf("%d ",hcf);
    
}
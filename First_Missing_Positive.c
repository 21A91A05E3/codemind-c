#include<stdio.h>
int firstMissingPositive(int* nums, int numsSize){
    int i = 0;
    while (i < numsSize)
    {
        int n = nums[i];
        if (0 < n && n < (numsSize + 1) && (n - 1) != i && nums[n - 1] != n)
        {
            nums[i] = nums[n - 1];
            nums[n - 1] = n;
        }
        else
        {
            i++;
        }
    }
    
    for (i = 1; i < numsSize + 1; i++)
    {
        if (nums[i - 1] != i)
            break;
    }
    
    return i;
}
int main()
{
    int n,i,a[100],r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    r=firstMissingPositive(a,n);
    printf("%d",r);
    
}

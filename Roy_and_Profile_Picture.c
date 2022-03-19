#include<stdio.h>
int main()
{
    int w[1000],h[1000],l,t,i;
    scanf("%d",&l);
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&w[i]);
        scanf("%d",&h[i]);
    }
    for(i=0;i<t;i++)
    {
        if(w[i]<l || h[i]<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(w[i]==h[i])
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
    
    
}
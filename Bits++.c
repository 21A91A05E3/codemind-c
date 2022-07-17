#include <stdio.h>
int main()
{
    int t,v=0,i,j;
    char str[4];
    scanf("%d",&t);
    for(i=0 ; i<t; i++ ) 
    {
        scanf("%s",str);
        for(j=0;j<3;j++) 
        {
            if(str[j]== '+')
            {
                v++;
                break;
            }
            else if(str[j]== '-') 
            {
                v--;
                break;
            }
        }
    }
    printf("%d", v);
    return 0;
}
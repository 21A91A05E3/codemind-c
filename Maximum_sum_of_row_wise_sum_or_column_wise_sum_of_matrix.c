#include<stdio.h>
   int main()
   {
       int r,c,i,j,a[100][100],s1=0,s2=0,max1=0,max2=0;
       scanf("%d%d",&r,&c);
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            s1=0;
            for(j=0;j<c;j++)
            {
                s1=s1+a[i][j];
            }
            if(s1>=max1)
            {
                max1=s1;
            }
        }
        for(j=0;j<c;j++)
        {
            s2=0;
            for(i=0;i<r;i++)
            {
                s2=s2+a[i][j];
            }
            if(s2>=max2)
            {
                max2=s2;
            }
        }
        if(max1>max2)
        {
            printf("%d",max1);
        }
        else
        {
            printf("%d",max2);
        }
   }
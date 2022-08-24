#include <stdio.h>  
int main()  
{  
  
    int n,i,j,k,m; 
    scanf ("%d",&n);   
    for ( i = 1; i <= n; i++)  
    {  
        for ( j = 1; j <= n-i; j++)  
        {     
            printf (" ");   
        }  
        for ( k=i-1; k>=0; k--)  
        {  
            printf ("%d", k); 
        }  
        for (m =1; m<=i-1; m++)  
        {  
            printf("%d", m);
        }  
        printf ("
");  
    }  
}  
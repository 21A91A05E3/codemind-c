#include <stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int l=1,s=0,e=0;
    for(int i=1; i<strlen(a); i++)
    {
      int j= i-1, k=i;
      while( j>=0 && k<strlen(a) && a[j]==a[k] )
      {
        if( k-j+1 > l)
        {
          s= j;
          e= k;
          l= k-j+1;
        }
        j--;
        k++;
      }
    }
    for(int i=0; i<strlen(a); i++)
    {
      int j= i-1, k=i+1;
      while( j>=0 && k<strlen(a) && a[j]==a[k] )
      {
        if( k-j+1 > l)
        {
          s= j;
          e= k;
          l= k-j+1;
        }
        j--;
        k++;
      }
    }

    for(int i=s; i<=e; i++ )
    {
      printf("%c",a[i]);
    }
  return 0;
}


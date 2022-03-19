#include<stdio.h>
int main()
{
char word[20];
scanf("%s",word);
int x=0,y=0,i;
for(i=0;word[i]!=NULL;i++)
{
if(word[i]=='z')
x++;
else
y++;
}
if(y==2*x)
printf("Yes");
else
printf("No");
return 0;
}
#include<stdio.h>
int main()
{
int h,m;
scanf("%d%*c%d",&h,&m);
if(h==0 || h==24)
{
printf("%2d:%02d AM",12,m);
return 0;
}
if(h>=12)
{ if(h>12)
h=h%12;
printf("%02d:%02d PM",h,m);
}
else
printf("%02d:%02d AM",h,m);
return 0;
}
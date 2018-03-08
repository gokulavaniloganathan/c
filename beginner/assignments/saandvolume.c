#include<stdio.h>
int main()
{
int l,b,h;
scanf("%d %d %d",&l,&b,&h);
int vol,sa;
vol=l*b*h;
sa=2*((l*b)+(b*h)+(h*l));
printf("%d ",sa);
printf("%d",vol);
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
int pow=10;
while(b>=pow)
pow=pow*10;
int x;
x=(a*pow)+b;
printf("%d",x);
return 0;
}
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i=0,d;
while(n!=0)
{
 d=n%10;
 n=n/10;
 i++;
}
printf("%d",i);
return 0;
}
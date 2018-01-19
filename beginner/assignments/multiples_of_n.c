#include<stdio.h>
int main()
{
int n,i,s;
scanf("%d",&n);
for(i=n;i<=5*n;i=i+n)
{
 printf("%d ",i);
}
return 0;
}
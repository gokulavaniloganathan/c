#include<stdio.h>
int main()
{
int i,n;
long int f=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 f=f*i;
}
printf("%ld",f);
return 0;
}
#include<stdio.h>
int main()
{
long int k,sum=0,i;
scanf("%ld",&k);
for(i=1;i<=k;i++)
{
 sum=sum+i;
}
printf("%ld",sum);
return 0;
}
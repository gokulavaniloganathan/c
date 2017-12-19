#include<stdio.h>
int main()
{
int a,sum=0,n,i;
scanf("%d",&n);
i=0;
while(i<n)
{
scanf("%d",&a);
sum=sum+a;
}
printf("%d",sum);
return 0;
}

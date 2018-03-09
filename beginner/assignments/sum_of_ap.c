#include<stdio.h>
int main()
{
int a,d,n,sum=0;
scanf("%d %d %d",&a,&d,&n);
sum=((n/2)*((2*a)+(n-1)*d));
printf("%d",sum);
return 0;
}
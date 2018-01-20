#include<stdio.h>
int main()
{
long int n,a,d;float sum=0;
scanf("%ld %ld %ld",&n,&a,&d);
sum=(n*(2*a+((n-1)*d)))/2;
printf("%0.0f",sum);
return 0;
}
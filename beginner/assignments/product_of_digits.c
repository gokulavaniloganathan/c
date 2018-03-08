#include<stdio.h>
int main()
{
long long int a;
scanf("%lld",&a);
long long int d,mul=1;
while(a!=0)
{
d=a%10;
mul=mul*d;
a=a/10;
}
printf("%lld",mul);
return 0;
}
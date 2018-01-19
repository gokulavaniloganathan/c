#include<stdio.h>
int main()
{
 int a,n,d,sum=0;
scanf("%d",&n);
d=n;
while(n!=0)
{
 a=n%10;
 sum=sum*10+a;
 n=n/10;
}
if(sum==d)
printf("yes");
else
printf("no");
return 0;
}

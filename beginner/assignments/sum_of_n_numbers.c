#include<stdio.h>
int main()
{
int n,sum=0;
scanf("%d\n",&n);
int a[n];
int i;
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
sum=sum+a[i];
}
printf("%d",sum);
return 0;
}

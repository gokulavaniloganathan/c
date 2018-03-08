#include<stdio.h>
int main()
{
int n,k;
scanf("%d %d\n",&n,&k);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}if(k<=n)
{
printf("%d",a[k-1]);
}
else
printf("wrong input");
return 0;
}
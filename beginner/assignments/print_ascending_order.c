#include<stdio.h>
int main()
{
int i,j=0,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(i=1;i<=n;i++)
{
if(a[j]!=i)
{printf("%d",i);
break;
}
j++;
}
return 0;
}
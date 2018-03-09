#include<stdio.h>
int main()
{
int n,k,flag=0;
scanf("%d %d",&n,&k);
int a[n];
int i;
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
{
if(k==a[i])
 {flag=1;
printf("yes");
break;
}
}
if(flag==0)
printf("no");
return 0;
}

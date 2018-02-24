#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;int sum=0,avg;
	for(i=0;i<n;i++)
	{
	
		scanf("%d ",&a[i]);
	sum=sum+a[i];
	}
avg=sum/n;	
printf("%d",avg);
return 0;
}

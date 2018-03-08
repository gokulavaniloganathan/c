#include<stdio.h>
int main()
{
	int i;
	int a,d,n,sum=0;
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		d=n%10;
		sum=sum*10+d;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}

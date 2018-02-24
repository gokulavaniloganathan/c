#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int i,c;
	int count=0;
	while(n!=0)
	{
		c=n%10;
		n=n/10;
		count++;
	}
	printf("%d",count);
	return 0;
}

#include<stdio.h>
int main()
{
	int n,a,c;
	scanf("%d",&n);
	a=n;
	while(n>1)
	{
	c=n%2;
	n=n/2;	
	}
	if(n==1&&c==0)
	{
		printf("%d",a*2);
	}
	else 
	printf("invalid input");
	return 0;
}

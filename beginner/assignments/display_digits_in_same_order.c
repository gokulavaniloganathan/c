#include<stdio.h>
int main()
{
	int n;
	int count=0;
	scanf("%d",&n);
	int a=n,i=0,c;
	while(a>0)
	{
		c=a%10;
		a=a/10;
		count++;
	}
	int b[count];
	while(n>0)
	{
		c=n%10;
		n=n/10;
		b[i]=c;
		i++;
	}
	for(i=count-1;i>=0;i--)
	{
		printf("%d ",b[i]);
		
	}
	return 0;
}

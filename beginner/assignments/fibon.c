#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=1,b=0,c,i;
	
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}

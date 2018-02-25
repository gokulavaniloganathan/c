#include<stdio.h>
int main()
{
	long int n;
	scanf("%ld",&n);
	int a[20],i=0,j,c;
	while(n!=0)
	{
		c=n%10;
		a[i]=c;
		
		n=n/10;
		i++;
	}
	for(j=i;j>=0;j--)
	{
		if(a[j]%2!=0)
		{
			printf("%d ",a[j]);
		}
	}
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int n,c,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		c=abs(n%10);
		sum=sum+c;
		n=n/10;
		
	}
	printf("%d",sum);
	return 0;
}

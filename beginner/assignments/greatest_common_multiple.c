#include<stdio.h>
int main()
{
	int a,b,i,gcd;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		for(i=1;i<=b;i++)
		{
			if(a%i==0&&b%i==0)
			gcd=i;
		}
	}
	else
	{
		for(i=1;i<=a;i++)
		{
			if(a%i==0&&b%i==0)
			{
				gcd=i;
			}
		}
	}
	printf("%d",gcd);
	return 0;
}


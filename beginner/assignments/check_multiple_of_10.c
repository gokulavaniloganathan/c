#include<stdio.h>
int main()
{
	int n,c;
	scanf("%d",&n);
	if(n%10==0)
	{
		printf("%d",n);
	}
	else
	{
		c=n%10;
		if(c==1)
		{
			printf("%d",n+9);
			
		}
		else if(c==2)
		{
			printf("%d",n+8);
		}
		else if(c==3)
		{
			printf("%d",n+7);
			
		}
		else if(c==4)
		{
			printf("%d",n+6);
			
		}
		else if(c==5)
		{
			printf("%d",n+5);
			
		}
		else if(c==6)
		{
			printf("%d",n+4);
			
		}
		else if(c==7)
		{
			printf("%d",n+3);
			
		}
		else if(c==8)
		{
			printf("%d",n+2);
			
		}
		else if(c==9)
		{
			printf("%d",n+1);
		}
	}
	return 0;
}

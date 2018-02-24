#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,c=0;
	a=n;
	
	while(n>1)
	{   c=n%2;
		n=n/2;
		if(c!=0)
		break;
	    	
	}
	
	if(c==0)
	printf("yes");
	else
	printf("no");
	return 0;
	
}

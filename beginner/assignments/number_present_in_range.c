#include<stdio.h>
int main()
{
	int n;
	int l,r,i,flag=0;
	scanf("%d\n",&n);
	scanf("%d %d",&l,&r);
	for(i=l+1;i<r;i++)
	{
		if(n==i)
		{   flag=1;
			printf("yes");
			break;
		}
	}
	if(flag==0)
	{
		printf("no");
		
	}
	return 0;
}

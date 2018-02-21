#include<stdio.h>
int main()
{
	int n;
  int a=0,b=1,c,i;
	scanf("%d",&n);
	printf("\n%d ",b);
	for(i=1;i<=n-1;i++)
	{
	 c=b+a;
	 printf("%d ",c);
	 a=b;
	 b=c;	 	
	}
	return 0;
}

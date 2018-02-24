#include<stdio.h>
int main()
{
	int n,n1,temp;
	scanf("%d %d",&n,&n1);
	temp=n;
	n=n1;
	n1=temp;
	printf("%d %d",n,n1);
	return 0;
}

#include<stdio.h>
int main()
{
	int n,n1,i;
	scanf("%d %d",&n,&n1);
	i=n^n1;
	n=n^i;
	n1=n^i;
	printf("%d %d",n,n1);
	return 0;
}

#include<stdio.h>
int main()
{
	long int n,n1,temp;
	scanf("%ld %ld",&n,&n1);
	temp=n;
	n=n1;
	n1=temp;
	printf("%ld %ld",n,n1);
	return 0;
}

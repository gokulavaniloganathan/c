#include<stdio.h>
int main()
{
	long int n1,n2;
	scanf("%ld %ld",&n1,&n2);
	long int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	printf("%ld %ld",n1,n2);
	return 0;
}

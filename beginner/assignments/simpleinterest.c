#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,t;
	scanf("%d %d %d",&p,&r,&t);
	int si;
	si=p*r*t*0.01;
	si=floor(si);
	printf("%d",si);
	return 0;
}

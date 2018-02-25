#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	n=n*m;
	float p;
	p=sqrt(n);
	int q=(int)p;
	float r;
	r=p-q;
	if(r==0)
    {
    	printf("yes");
	}
	else
	printf("no");
	
	return 0;
}

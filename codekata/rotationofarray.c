#include <stdio.h>

int main(void) {
int a[10];
int n,k,i,j,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	
}
scanf("%d",&k);
while(k>0)
{    temp=a[0];
	for(i=0,j=i+1;i<n&&j<n;i++,j++)
	{
	a[i]=a[j];
		 	
	}
	a[i]=temp;
	k--;
}
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
	return 0;
}


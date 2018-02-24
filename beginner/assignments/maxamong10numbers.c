#include<stdio.h>
int main()
{
	int arr[10];
	int i,m=0,temp;
	
	for(i=0;i<10;i++)
	{
		scanf("%d ",&arr[i]);
		
	}
	m=arr[0];
	for(i=1;i<10;i++)
	{
		if(m<arr[i])
		{
			temp=m;
			m=arr[i];
			arr[i]=temp;
			
		}
		
	}
	printf("%d",m);
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10];
	int i,max=0,temp;
	
	for(i=0;i<10;i++)
	{
		scanf("%d ",&arr[i]);
		
	}
	max=arr[0];
	for(i=1;i<10;i++)
	{
		if(max<arr[i])
		{
			temp=max;
			max=arr[i];
			arr[i]=temp;
			
		}
		
	}
	printf("%d",max);
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10000];
	int n,i,temp,temp1;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			temp=max;
			max=arr[i];
			arr[i]=max;
			
		}
		if(min>arr[i])
     {  
	temp1=min;
	min=arr[i];
	arr[i]=temp1;
	}	
	}
printf("%d %d",min,max);
return 0;	
}

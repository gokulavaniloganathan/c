#include<stdio.h>
int main()
{
	char a[1000];
	gets(a);
	int count=0,i;
	for(i=0;a[i]!='\0';i++)
	{
		 if(a[i]!=' ')
		 count++;
	}
	printf("%d",count);
	return 0;
	
}

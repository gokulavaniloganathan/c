#include<stdio.h>
int main()
{
	char s[1000];
	gets(s);
	int i,count=0;
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>=32&&s[i]<=42)||(s[i]>=58&&s[i]<=64))
	{
		count++;
		
	}
	}
	printf("%d",count);
	return 0;
}

#include<stdio.h>
int main()
{
	char s[1000];
	gets(s);
	int count=0,i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		count++;
	}
	printf("%d",count);
	return 0;
}

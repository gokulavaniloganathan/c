#include<stdio.h>
int main()
{
	char s[1000];
	gets(s);
	int i,count=0;
	for(i=0;s[i]!='\0';i++)
	{ if(s[i]>=48&&s[i]<=57)
		count++;
		
	}
	printf("%d",count);
	return 0;
}

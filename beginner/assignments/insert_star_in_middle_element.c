#include<stdio.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int i;
	for(i=0;s[i]!='\0';i++);
	int n=i;
	if(n%2==0)
	{
		s[n/2]='*';
		s[(n-1)/2]='*';
	}
	else
	{
		s[n/2]='*';
	}
	printf("%s",s);
	return 0;
}

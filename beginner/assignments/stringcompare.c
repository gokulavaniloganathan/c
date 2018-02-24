#include<stdio.h>
int main()
{
	char s[100],s1[100];
	int count=0,count1=0;
	int i;
	scanf("%s",s);
	scanf(" %s",s1);
	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	for(i=0;s1[i]!='\0';i++)
	{
		count1++;
	}
	if(count1>count)
	printf("%s",s1);
	else if(count>count1)
	printf("%s",s);
	else
	printf("%s",s1);
	return 0;
}

#include<stdio.h>
int main()
{
	char s[100];
	int n,i;
	fgets(s,100,stdin);
	scanf(" %d",&n);
	if(n>=0)
	{
	
	for(i=0;i<n;i++)
	{
		printf("%c",s[i]);
	}
}
else
printf("Invalid Input");
	return 0;
	
}

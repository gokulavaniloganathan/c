#include<stdio.h>
int main()
{
	char s[1000];
	fgets(s,1000,stdin);
	int i,flag=0,flag1=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
		{
			flag=1;
			break;
		}
		else
		flag=0;
		 
		
		
	}
for(i=0;s[i]!='\0';i++)
{
	if(s[i]>=48&&s[i]<=57)
	{
		flag1=1;
		break;
	}
	}	
	if(flag=1&&flag1==1)
	{
		printf("Yes");
	}
	else
	printf("No");
	return 0;
}

#include<stdio.h>
int main()
{
	char s[1000];
	int flag=0,i,j;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=0;s[j]!='\0';j++)
		{
			if((s[i]==s[j])&&(i!=j))
			{
				
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("Yes");
	}
	else if(flag==1)
	{
		printf("No");
	}
	return 0;
}


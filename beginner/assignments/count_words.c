#include<stdio.h>
int main()
{
	char s[1000];
	gets(s);
	int charfound=0,i,count=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' '||(s[i]>=48&&s[i]<=57))
		{
		charfound=0;
	}
		else
		{
			if(charfound==0)
   			{
			   count++;
			charfound=1;
		}
		}
	}
	printf("%d",count);
	return 0;
}   

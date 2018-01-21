#include<stdio.h>
int main()
{
	char s[1000];
	int i,count=0;
	int charfound=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='.')
		charfound=0;
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

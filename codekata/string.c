#include <stdio.h>
#include<string.h> 
int main(void) {
	char ch[20];
	gets(ch);
	int i=0,n;
	n=strlen(ch);
	if(n%2==0)
	{
	for(i=0;i<n;i+=2)
	{
		int temp=ch[i];
		ch[i]=ch[i+1];
		ch[i+1]=temp;
		
	}
	printf("%s",ch);
	}
	else
	{
	for(i=0;i<n-1;i+=2)
	{
	     int temp=ch[i];
	     ch[i]=ch[i+1];
	     ch[i+1]=temp;
	}
	printf("%s",ch);
	}
	return 0;
}


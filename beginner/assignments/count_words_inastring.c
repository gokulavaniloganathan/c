#include<stdio.h>

int main()
{
	char s[10000];
	fgets(s,10000,stdin);
	int i,charfound=0,count=0;
	for(i=0;s[i]!='\0';i++)
	{ if(s[i]==' '||s[i]=='\n')
	{
		
	
       charfound=0;
   }
       else if(charfound==0)
       {
	   
       charfound=1;
       count++;
   }
	
		}
	printf("%d",count);
	return 0;
}

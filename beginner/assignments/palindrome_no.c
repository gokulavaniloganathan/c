#include<stdio.h>
int main()
{
	char s[100];
	fgets(s,100,stdin);
	int i,j,flag=0;
	for(i=0;s[i]!='\0';i++);

	int n=i;
	
	for(i=0,j=n-1;i<n/2;i++,j--)
	{ 
		if(s[i]!=s[j])
        {
        	flag=1;
        	break;
		}
		
	}
	if(flag==1)
	{
		printf("no");
	}
	else
	printf("yes");
	return 0;
}

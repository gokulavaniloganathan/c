
#include <stdio.h>

int main(void) {
	char ch[20];
	int a[20];
	gets(ch);
	int n,i,j,num1;
	n=strlen(ch);
	for(i=0;i<n;i++)
	{
		 if(ch[i]=='i'||ch[i]=='I')
		  a[i]=1;
		  else if(ch[i]=='v'||ch[i]=='V')
		  a[i]=5;
		  else if(ch[i]=='x'||ch[i]=='X')
		  a[i]=10;
	}
	
	for(i=0;i<n;i++)
	{ if(n==1)
	{
             printf("%d",a[i]);
	break;
		
	}
             else if(a[i]<a[i+1])
	{ int num=a[i+1]-a[i];
	 printf("%d",num);
	 break;
	}
	
		 for(i=0;i<n;i++)
		{
	            for(int j=1;j<n;j++)
		{
		if(a[i]>a[j])
		{ num1=a[i]+a[j];	
		}
		}
		}
			
		}
	}
	return 0;
}

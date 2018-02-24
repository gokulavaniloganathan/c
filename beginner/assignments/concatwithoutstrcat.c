#include<stdio.h>
int main()
{
	char s[1000],s1[1000];
	scanf("%s %s",s,s1);
	char a[2000];
	int i,j;
	for(i=0;s[i]!='\0';i++)
	{
		a[i]=s[i];
	}
 for(j=0;s1[j]!='\0';j++)
 {
 	a[i]=s1[j];
 	i++;
	 }	
	 a[i]='\0';
	 printf("%s",a);
	 return 0;
	
}

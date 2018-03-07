#include<stdio.h>
int main()
{
	char s[100],s1[100],s2[100];
	int i,k=0,k1=0;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(i%2==0)
		{
			s1[k]=s[i];
			k++;
		}
		else
		{
		
		s2[k1]=s[i];
	k1++;
}
	}
	s1[++k]='\0';
	s2[++k1]='\0';
	i=0;
	printf("%s ",s1);
	printf("%s",s2);
	return 0;
}

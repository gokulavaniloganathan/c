#include<stdio.h>

int main()

{
char s[100],temp;

scanf("%s",s);

int i,j;

for(i=0;s[i]!='\0';i++)

{
	
for(j=i+1;s[j]!='\0';j++)

{
	if(s[i]>s[j])

	{
	temp=s[i];

		s[i]=s[j];
	
               s[j]=temp;
	
         }

}

}

printf("%s",s);

return 0;

}
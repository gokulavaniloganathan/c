#include<stdio.h>
int main()
{
char s[100];
int i;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>=48&&s[i]<=57)
{
 printf("%c",s[i]);
}
}
return 0;
}
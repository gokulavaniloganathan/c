#include<stdio.h>
int main()
{
char s[100];
fgets(s,100,stdin);
int i,charfound=0;
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
charfound=0;
else if(charfound==0)
{
 charfound=1;
 if(s[i]>=97&&s[i]<=122)
{
 s[i]=s[i]-32;
}
}
}
printf("%s",s);
return 0;
}
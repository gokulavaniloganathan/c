#include<stdio.h>
int main()
{
char s[100];
int k;
scanf("%s ",s);
scanf("%d",&k);
int i,n;
for(i=0;s[i]!='\0';i++);
for(n=i-k;n<i;n++)
{
 printf("%c",s[n]);
}
return 0;
}
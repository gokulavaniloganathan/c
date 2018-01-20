#include<stdio.h>
int main()
{
char a[20];
scanf("%s",a);
int i,flag=0;
for(i=0;a[i]!='\0';i++)
{flag=0;
 if(a[i]>=48&&a[i]<=57)
  flag=1;
}
if(flag==1)
printf("Yes");
else
printf("no");
return 0;
}

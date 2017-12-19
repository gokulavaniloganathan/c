#include<stdio.h>
int main()
{
int a,n,count=0;
scanf("%d",&n);
while(n>0)
{count++;
 a=n%10;
 n=n/10;
 }
 printf("%d",count);
 return 0;
 }
 

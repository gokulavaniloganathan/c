#include<stdio.h>
int main()
{
long int a,b;
scanf("%ld %ld",&a,&b);
long int i;
for(i=a+1;i<b;i++)
{
 if(i%2!=0)
 printf("%ld ",i);
}
return 0;
}
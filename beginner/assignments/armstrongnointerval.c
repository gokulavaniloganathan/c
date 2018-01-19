#include<stdio.h>
int main()
{
long int a,b,c,d,i,j,sum=0,n=0,e;
scanf("%ld %ld",&a,&b);
for(i=a+1;i<b;i++)
{j=i;  
n=0;
sum=0;
 c=j;
  d=j;
  while(j>0)
{ j=j/10;
  n++;
}
 while(d>0)
{
 e=d%10;
 sum=sum+pow(e,n);
 d=d/10;
}
 if(sum==c)
 printf("%ld ",c);
}
return 0;
}
 
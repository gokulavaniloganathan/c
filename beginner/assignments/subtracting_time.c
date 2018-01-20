#include<stdio.h>
#include<math.h>
int main()
{
int h1,m1,h2,m2;
scanf("%d %d\n%d %d",&h1,&m1,&h2,&m2);
h2=abs(h1-h2);
m2=abs(m1-m2);
printf("%d %d",h2,m2);
return 0;
}
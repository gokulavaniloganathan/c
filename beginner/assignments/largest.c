#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b>c)
printf("\n%d is largest",a);
else if(b>c>a)
printf("\n%d is largest",b);
else if(c>a>b)
printf("\n%d is largest",c);
else
printf("\nall are equal");
return 0;
}

#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d\n %d\n %d",&a,&b,&c);
if(a>b&&a>c)
printf("\n%d is largest",a);
else if(b>c&&b>a)
printf("\n%d is largest",b);
else if(c>a&&c>b)
printf("\n%d is largest",c);

return 0;
}

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int h,m;
h=n/60;
m=n-(h*60);
printf("%d %d",h,m);
return 0;
}

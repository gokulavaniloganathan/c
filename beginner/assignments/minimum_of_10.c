#include<stdio.h>
int main()
{
int a[10];
int i;
for(i=0;i<10;i++)
{
scanf("%d ",&a[i]);
}
int min;
int j;
min=a[0];
j=1;
for(i=0;i<10,j<10;i++,j++)
{
 if(min>a[j])
 min=a[j];
}
printf("%d",min);
return 0;
}
 

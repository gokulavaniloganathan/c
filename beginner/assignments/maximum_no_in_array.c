#include<stdio.h>
int main()
{
long int n;
scanf("%ld\n",&n);
long int a[n];
long int i,max;

for(i=0;i<n;i++)
{
 scanf("%ld ",&a[i]);
}
max=a[0];

for(i=1;i<n;i++)
{ if(max<a[i])
   max=a[i];
}
printf("%ld",max);
return 0;
}

  
  
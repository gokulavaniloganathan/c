#include<stdio.h>
int main()
{
long int n;
scanf("%ld\n",&n);
long int a[n];
long int i,min;

for(i=0;i<n;i++)
{
 scanf("%ld ",&a[i]);
}
min=a[0];

for(i=1;i<n;i++)
{ if(min>a[i])
   min=a[i];
}
printf("%ld",min);
return 0;
}

  
  
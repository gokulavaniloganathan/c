#include<stdio.h>
int main(void)
{
  int a[10];
  int i,j,n,flag=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i+=a[i])
  {
    if(i==n-1)
    {
      flag=1;
      printf("true");
    }
  }
  if(flag==0)
  {
printf("false");
  }
  return 0;
}

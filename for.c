#include<stdio.h>
void main()
{
  int a,b;
  for(a=b=1;a;b=b+1)
  {
      a=b<=3;
      printf("%d\n",a,b);
  }
  {
      printf("%d%d\n",a+10,b+10);
  }
}

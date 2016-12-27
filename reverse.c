#include<stdio.h>
main()
{
  int a,c=0;
  scanf("%d",&a);
  while(a!=0)
  {
    c=c*10+a%10;
    a=a/10;
  }
  printf("number :%d",c);


}

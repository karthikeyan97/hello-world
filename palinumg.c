#include<stdio.h>
int rev(int a)
{
  int c=0;
  while(a>0)
  {
    c=c*10+a%10;
    a=a/10;
  }
  return c;
}
main()
{
  int num,num2,num3,count1=0,count2,temp1=1,temp2=1,num4,temp3;
  scanf("%d",&num);
  num++;
  num2=num;
  do
  {
    count1++;
    num2=num2/10;
    temp1=temp1*10;
  }while(num2!=0);
  count2=count1/2;
  while(count2>0)
  {
    temp2=temp2*10;
    count2--;
  }
  num2=num%temp2;
  temp3=temp1/temp2;
  num3=num/temp3;
  num4=rev(num3);
  printf("\n num4 %d num3 %d\n",num4,num3);
  if(num4>num2)
  {
    num3=(num/temp2)*temp2+num4;
  }
  else
  if(num4<num2)
  {     if(count1%2==0)                
        {
              num3=(num3+1)*temp3+rev((num3+1)*temp3);
        }
         else
         {
              num3=(num/temp2+1)*temp2+rev((num/temp2)*temp2);
         }
  }
  else
  {
    num3=num;
  }
  printf("\nnum3 %d",num3);
}



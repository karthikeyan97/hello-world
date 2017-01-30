#include<stdio.h>
#include<conio.h>
int rev(int a)
{
    int c=0;
    while(a!=0)
    {
    c=c*10+a%10;
    a=a/10;
    }
    return c;
    }
main()
{
    int n,numcount=0,div1=1,div2=1,div3,temp1,temp2,num;
    scanf("%d",&n);
    n++;
    temp1=n;
    do
    {
      numcount++;
      div1=div1*10;
      temp1=temp1/10;
    }while(temp1!=0);
    temp2=numcount/2;
    while(temp2!=0)
    {
      div2=div2*10;
      temp2--;
    }
    div3=div1/div2;
    temp1=n/div3;
    temp2=n%div2;
    if(rev(temp2)>temp1)
    {
      temp1=n/div2;
      temp1++;

    }
    else
    {
    temp1=n/div2;
    }
    num=temp1*div2+rev(temp1)%div2;
    printf("%d",num);
    getch();
}

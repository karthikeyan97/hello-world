#include<stdio.h>
main()
{
    int num,temp,count=1,digit=0,arr[8];
    scanf("%d",&num);
    temp=num;
      do
      {
          arr[digit]=temp%10;
          digit++;

          temp=temp/10;
      }while(temp!=0);

      for(int i=0;i<digit;i++)
          for(int j=i;j<digit;j++)
              {
                  if(arr[i]>arr[j])
                  {
                      temp=arr[i];
                      arr[i]=arr[j];
                      arr[j]=temp;
                  }
              }
    temp=0;
    for(int i=0;i<digit;i++)
    temp=temp*10+arr[i];
    printf("%d",temp);
}

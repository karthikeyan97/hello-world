#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int max1=0,max2=0,i,j,n;
  int *a;
  printf("enter the no of elements\n");
  scanf("%d",&n);
  a=(int*)malloc(sizeof(int)*n);
  printf("\nenter the elements\n");
  for( i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    {
      if(a[i]>max1)
      {
        max2=max1;
        max1=a[i];
      }
      else
      if(a[i]>max2)
      {
        max2=a[i];
      }
    }
  }
  printf("\n%d",max2);
  getch();
}

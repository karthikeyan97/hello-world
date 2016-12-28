 #include<stdio.h>
 main()
 {
      int i=1,c,a,m;
      printf("enter the number and times of right shift\n");
      scanf("%d",&a);
      scanf("%d",&m);
      m=m%5;
      m=5-m;
      while(m!=0)
      {
        i=i*10;
        m--;

      }

      c=a%i;
      a=a/i;
      a=c*(100000/i)+a;
      printf("\nthe required number is %d ",a);
}

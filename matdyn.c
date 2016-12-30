#include<stdio.h>

main()
{

    int m,n,k,i,j,**p;
    scanf("%d%d%d",&m,&n,&k);
    p=(int **)malloc(sizeof(int *)*m);
    for( i=0;i<m;i++)
      {
      p[i]=(int*)malloc(sizeof(int)*n);
      for( j=0;j<n;j++)
        p[i][j]=i+j==k?1:0;

      }
     for( i=0;i<m;i++)
      {

        for( j=0;j<n;j++)
          printf("%d",p[i][j]);
        printf("\n");
      }

}

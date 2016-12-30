#include<stdio.h>

main()
{
    int **a;
    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
      a[i][j]=((i+j)==k?1:0);
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
        printf("%d",a[i][j]);
      printf("\n");
    }

}

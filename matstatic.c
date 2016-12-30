#include<stdio.h>
main()
{
	int a[9][9];
	int m,n,k,i,j;
	scanf("%d %d %d",&m,&n,&k);

	for( i=0;i<m;i++)
	for(j=0;j<n;j++)
		if(i+j==k)
			a[i][j]=1;
		else
			a[i][j]=0;
	for(i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
			printf(" %d ",a[i][j]);
		printf("\n");
	}
}

#include<stdio.h>
main()
{
	int m,n,count1=0,count2=0;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)

		{
			scanf(" %d ",&a[i][j]);
		}	
	}
	while(count1<m||count1<n)
	{
		a[count1][0]=1;
		a[count1++][n-1]=1;
		a[0][count2]=1;
		a[m-1][count2++]=1;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			{
				printf(" %2d ",a[i][j]);
			}
		printf("\n");
	}
}

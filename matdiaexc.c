#include<stdio.h>
main()
{
	int n,count1=0,temp;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)

			{
				scanf(" %d ",&a[i][j]);
			}	
		}
	while(count1<n)
		{
			temp=a[count1][count1];
			a[count1][count1]=a[count1][n-count1-1];
			a[count1][n-count1-1]=temp;
			count1++;	
		}
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				{
					printf(" %2d ",a[i][j]);
				}
			printf("\n");
		}
}

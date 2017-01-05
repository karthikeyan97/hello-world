#include<stdio.h>
main()
{
		int n,count1=1,count2=0,count3,temp=0,i,j;
		scanf("%d",&n);
		int a[n][n];
		count3=n/2;
		
		while(count1<=n*n)
			{
			    
			    a[(n+count2)%n][(count3++)%n]=count1++%(n*n);
					temp=count2--;
				while((n+count2)%n!=(n+temp)%n)
					{
                    
					a[(n+count2)%n][(count3++)%n]=count1++;
					count2--;
                    
					}
					count2=(n+count2+2)%n;
                    count3--;
					

			}
		for(i=0;i<n;i++)
			{
			for(j=0;j<n;j++)
				printf(" %2d ",a[i][j]);
			printf("\n");
			}

}

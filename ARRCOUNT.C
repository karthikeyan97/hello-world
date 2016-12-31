#include<stdio.h>
#include<stdlib.h>
main()
{
	int *a;
	int m,n,count=0;
	printf("enter the number of elements in an array\n");
	scanf("%d",&m);
	a=(int*)malloc(sizeof(int)*m);
	printf("enter the elements of the array\n");
	for(int i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("\nenter the element to be found\n");
	scanf("%d",&n);
	for(int i=0;i<m;i++)
		if(a[i]==n)
			{
				count++;
			}
	printf("\n%d is found %d times\n",n,count);
}

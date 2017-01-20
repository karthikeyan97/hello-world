#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
	int n,count1=1,count2,count3,i,*a;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	count2=n;
	while(count2>0)
	{
	count1=count1*2;
	count2--;
	}
	count1--;
	while(count1>0)
	{
	count3=count1;
	while(count3>0)
	{
		if(count3%2==1)
		printf(" %d ",a[count2++]);
		else
		count2++;
		count3=count3/2;
	}
	printf("\n");
	count1--;
	count2=0;

	}
	printf("null set");
	getch();



}
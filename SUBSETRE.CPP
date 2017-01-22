#include<stdio.h>
#include<conio.h>
#include<math.h>
powerset(int *a,int count)
{
	int count1=0;
	int count2=count;
	if(count)
	{
		while(count2>0)
			{
				if(count2%2==1)
				{
					printf(" %d ",a[count1]);

				}
				count1++;
				count2=count2/2;

			}
		printf("\n");
		powerset(a,count-1);
	}
	else
	printf("null set");

}
main()
{   clrscr();
	int a[3]={1,2,3},n=3;
	powerset(a,pow(n,2)-1);
	getch();

}
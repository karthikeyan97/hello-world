#include<stdio.h>
int prime(int a)
{
	int i=6;
	if(a%2==0&&a>3)
	{
		return 0;
	}
	else
	if(a%3==0&&a>3)
	{
		return 0;
	}
	else
	{
		for(i=6;i<a/2;i=i+6)
			{
				if(a%(i-1)==0)
				{
					return 0;
				}
				else
				if(a%(i+1)==0)
				{
					return 0;
				}
			}
	}
	return 1;

}
main()
{
	int n=n,i=0;
	scanf("%d",&n);
	n=n+1;
	if(n%6==0)
	{
		if(prime(n+1))
			printf("%d",n+1);
		
	}
	else
	{	n=((n/6)+1)*6;
		while(i!=1)
		{
			if(i=prime(n-1))
			{
				printf("\n%d",n-1);
			}
			else
			if(i=prime(n+1))
			{
				printf("\n%d",n+1);
			}
		}
		
	}


}

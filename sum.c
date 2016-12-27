#include<stdio.h>
main()
{
	int a,b=0,c=0;
	scanf("%d",&a);
	do
	{
		c=c+a%10;
		a=a/10;
		b++;
	}
	while(a!=0);
	printf("sum:%d\ndigits:%d",c,b);
}

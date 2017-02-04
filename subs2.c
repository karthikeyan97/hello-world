#include<stdio.h>
#include<string.h>
void subs(char**a,char *b,int i,int j)
{
	char *n;
	for(int k=i;k<j;k++)
	{
		printf("%s %s",b,a[i]);
		strcat(n,b);
		strcat(n,a[i]);
		subs(a,n,i+1,j);
	}

}

void main()
{
char a[10][10];
for(int i=0;i<3;i++)
	scanf("%s",&a[i]);
subs(a,"\0",0,2);
}

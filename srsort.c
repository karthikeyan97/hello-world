#include<stdio.h>
#include<conio.h>
void sor(char a[20][20],int i,int j,int n)//SORTING OF NUMBERS WITH SAME NUMBER OF DIGITS (BUBBLE SORT)
{    
	int k=i,l=i,m=0;
	char *b;
	printf("\n %d called",n);
	printf("\ni::%d j::%d",i,j);
	for(k=i;k<j-1;k++)
		for(l=i;l<j-1-(k-i);l++)
			{   	printf("\nl:: %d ",l);
				m=0;
				while(m<n)
					{
						if(a[l][m]<a[l+1][m])
							{
								m=n;
							}
						else
						if(a[l][m]>a[l+1][m])
						{
							strcpy(b,a[l]);
							strcpy(a[l],a[l+1]);
							strcpy(a[l+1],b);
							m=n;
						}
						else
						{
								m++;
						}
					}
			}

}
void strsor(char a[20][20],int num)//SORTING OF NUMBERS BASED ON NUMBER OF DIGITS
{
	int i=0,j=0,k=0,l=1,fla=0;
	char temp[20];
	while(i<=num)
	{
		if(l==strlen(a[j]))
		{
			if(i==j)
			{
				i++;
				j++;
			}
			else
			{
			  strcpy(temp,a[i]);
			  strcpy(a[i],a[j]);
			  strcpy(a[j],temp);
			  i++;
			  j++;

			}
		}
		else
		{
		j++;
		}
		if(j==num)
		{	if(k!=i)
			{
				sor(a,k,i,l);//SORT THE ARRAY ONCE NUMBERS WITH PARTICULAR NUMBER OF DIGITS HAVE BEEN SORTED
			}
		 	k=i;
			j=i;
			l++;
		}
	 }

}
main()
{
	char a[20][20],m;
	int n=0,i=0,k=0,t=0;
	printf("enter the number of elements of array ");
	scanf("%d",&n);
	scanf("%c");
	for(k=0;k<n;k++)
	{
		do
		{
			scanf("%c",&m);
			if(m!='0'||t==1)
			{
				a[k][i++]=m;
				t=1;
			}
		}while(a[k][i-1]!='\n');
		a[k][i-1]='\0';
		i=0;
		t=0;
	}


	strsor(a,n);
	for(k=0;k<n;k++)
	printf("\n%s",a[k]);
	getch();
	clrscr();

}

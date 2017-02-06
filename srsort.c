#include<stdio.h>
#include<conio.h>
void sor(char a[20][20],int i,int j,int n)
{    int k,l,m=0;
	char *b;
for(k=i;k<j-1;k++)
	for(l=i;l<j-k;l++)
		{
			while(m<n)
				{
					if(a[l][m]<=a[l+1][m])
							{
							m++;
							}
					else
						{
						  strcpy(b,a[l]);
						  strcpy(a[l],a[l+1]);
						  strcpy(a[l+1],b);
						  m=0;
						  break;
						}
				}
		}

}
void strsor(char a[20][20],int num)
{
	int i=0,j=0,k=0,l=1,fla=0;
	char *temp;
	while(i<num)
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
			  fla=1;
			}
	 }
		else
		{
		  j++;
		}
		if(j==num)
			{
			  sor(a,k,i-1,l);
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


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[4][4],temp,i=1,nptr=3,nptc=3,j,randi=0,count=0,ecount=0;
	char choice='l';
	while(i<=16)
	{
		a[(i-1)/4][(i-1)%4]=i;
		i++;
	}
	a[(i-1)/4][(i-1)%4]='\t';
	do
	{
		for(i=0;i<4;i++)
		{
			printf("\n");
			for(j=0;j<16;j++)
			{
				printf("-");
			}
			printf("\n");
			for(j=0;j<4;j++)
			{	if(nptr==i&&nptc==j)
				{
					printf("   |");
				}
				else
				{
					printf("%2d |",a[i][j]);
				}
			}
		}
		printf("enter the choice \n 1.L-left 2.R=right 3.U-up 4.D-down 5.Q-quit");
		if(count<50)
		{
			randi=rand()%4;
			if(randi==0)
			{
				choice='l';
			}
			
			else
			if(randi==1)
			{
				choice='r';
			}
			else
			if(randi==2)
			{
				choice='u';
			}
			else
			if(randi==3)
			{	
				choice='d';
			}
		}
		else
		{
			scanf("%c",&choice);
		}
		switch(choice)
		{
			case 'l':

				 if(nptc-1>=0)
					{
						temp=a[nptr][nptc];
						a[nptr][nptc]=a[nptr][nptc-1];
						a[nptr][nptc-1]=temp;
						nptc--;

					}
				   break;
			case 'r':

				 if(nptc+1<4)
					{
						temp=a[nptr][nptc];
						a[nptr][nptc]=a[nptr][nptc+1];
						a[nptr][nptc+1]=temp;
						nptc++;

					}
				 break;
			case 'u':

				 if(nptr-1>=0)
					{
						temp=a[nptr][nptc];
						a[nptr][nptc]=a[nptr-1][nptc];
						a[nptr-1][nptc]=temp;
						nptr--;

					}
				break;
			case 'd':

				 if(nptr+1<4)
					{
						temp=a[nptr][nptc];
						a[nptr][nptc]=a[nptr+1][nptc];
						a[nptr+1][nptc]=temp;
						nptr++;
					}

				break;
			default:
				printf("invalid input");
				break;


	   }
	   count++;
	   for(i=0;i<4;i++)
	   for(j=0;j<4;j++)
	   {	
		
		if(a[i][j]==(i*4)+(j+1))
		 {
			   ecount++;
			printf("%d ",ecount); 
		}
		else
		{
			ecount=0;
			break;
		}
	   }
		if(ecount==16)
		{
		printf("\nyou win");
		break;
		}
		
	  
	}while(choice!='q');


}

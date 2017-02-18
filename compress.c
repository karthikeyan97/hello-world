#include<stdio.h>
#include<string.h>
char *subs(char a[10],int c1,int c2)
	{
		char *b;
		b=(char*)malloc(sizeof(char)*20);
		int count=c1;
		int count1=0;
		while(count<c2)
			{	
				b[count1]=a[count];
				count1++;
				count++;
			}
		b[count1]='\0';
		
		return b;
		
	}
int patr(char *a)
	{
		int count1 =1;
		int count2 =0,i=0;
		int count3;
		char *c=(char*)malloc(sizeof(char)*20);
		int j;
		
		
		
		return count3;
	}
void pat(char *a)
	{
		int count1 =1;
		int count2 =0,i=0;
		int count3;
		char *c=(char*)malloc(sizeof(char)*20);
		int j;
		
		while(count2<strlen(a))
		{			
					c[0]=a[count2];
					count3=0;
					count1 =0;
			for(i=count2+1;i<=strlen(a);i++)
			{	
				
				if(a[i]==c[0])
					{
					
					
					count1++;
					break;
					}
				else
					{
						count1++;						
						c[count1]=a[i];
						
					}
					if(count1>strlen(a)/2+1)
					{
						count1=1;
						break;
					}
				
			}
			
			c[count1]='\0';
			
				
				for(j=count2;j<=strlen(a)-count1;j=j+count1)
				{
					if(!strcmp(c,subs(a,j,j+count1)))
						count3++;
					else
						break;
				}
			count2=count2+count1*count3;
			
			printf("%d%s",count3,c);
		}
	}
main()
	{
		char a[10]="aabcbcc";
		pat(a);
		
	}

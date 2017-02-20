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
		int j,k;
		
		while(count2<strlen(a))
		{	
			count3=0;		
			c[0]=a[count2];
			for(j=0;j<strlen(a)/2-count2;j++)
			{
			count1=0;
			
						
				
			c=subs(a,i,strlen(a)/2-j);
						
					

				
			
			count1=strlen(c);
							for(k=count2;k<=strlen(a)-count1;k=k+count1)
				{
					if(!strcmp(c,subs(a,k,k+count1)))
						count3++;
					else
						break;
				}
			if(count3==1)
				count2++;
			count2=count2+count3*count1;
			
			printf("count 3: %d string %s\n",count2,c);
			}
			
			
			
				
	
		}
	}
main()
	{
		char a[10]="aabaaaabaacd";
		pat(a);
		
	}


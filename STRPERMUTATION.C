#include<stdio.h>
main()
{
	char c[100],b[100];
	int count=0,a[10],count1=0,count2=0,count3=0,flag=0,count4=0;
	gets(c);
	
	while(c[count1]!='\0')
		{
			count2=0;
			flag=0;
			while(count2<count3)
				{
          if(b[count2]==c[count1])
            {
              a[count2]++;
              flag=1;	
            }
          count2++;				
				}
			if(!flag)
				{
					b[count3]=c[count1];
					a[count3++]=1;
					
				}
			count1++;
		}

	flag=0;
	if(count1%2==0)
		for(int i=0;i<count3;i++)
			{			
				if(a[i]%2!=0)
				{
          flag=1;
          break;
				}
			}
	else
		for(int i=0;i<count3;i++)
			{			
				if(a[i]%2!=0)
				{
				  count4++;
				  break;
				}
				
				
			}
		if(count4>1)
			flag=1;
		if(flag)
			{
			  printf("NOT A PERMUTATION");
			}
		else
			  printf("PERMUTATION");
}

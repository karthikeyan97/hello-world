#include <stdio.h>

int main(void) {
	// your code goes here
		int mod,num,parr[10]={1,2,3,5,7,11,13,17,19},count1=0,count2=1,count3=1,flag=1;
		scanf("%d",&num);
	mod=num;
	while(mod!=0)
	{
		mod=mod/parr[count1];
		if(mod!=0)
			{
				count2=count2*parr[count1++];
			}
			
	}
	count1=num-count2;
	while(count1<=count2)
		{
			count1++;
			flag=1;
			while(count3<9)
			{
				if(count1%parr[count3++]==0)
					flag=0;
			}
			if(flag)
			{
				break;
			}
		}
	printf("%d",count2+count1);
	return 0;
}


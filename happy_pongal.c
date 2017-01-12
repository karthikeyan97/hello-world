#include <stdio.h>
#include<time.h>
int main(void) 
{
	// your code goes here
	int count=0;
	time_t t1;
	char a[15]="HAPPY PONGAL";
  while(a[count]!='\0')
		{
	    t1=time(0);
	    while((time(0)-t1)<1)
        {
        }
       printf("%c",a[count++]);
		}
    return 0;
}


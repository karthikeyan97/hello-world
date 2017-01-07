#include <stdio.h>

int main(void) {
	// your code goes here
	float s;
	scanf("%f",&s);
	float x=s/2;
	float e=(x*x-s)/(2*x);
	while(e>0.0001)
	  {
	      x=(x+s/x)/2;
	      
	      e=(x*x-s)/(2*x);
	      
	  }
	  printf("%f",x);
	return 0;
}

#include<stdio.h>
main()
{
char c[10];
int b[5]={0,0,0,0,0},count=0;
gets(c);
while(c[count]!='\0')
{
switch(c[count++])
	{
	case 'a':
		b[0]++;
		break;
	case 'e':
		b[1]++;
		break;
	case 'i':
		b[2]++;
		break;
	case 'o':
		b[3]++;
		break;
	case 'u':
		b[4]++;
		break;
	
		
	}

}
printf("a:%d\n",b[0]);
printf("e:%d\n",b[1]);
printf("i:%d\n",b[2]);
printf("o:%d\n",b[3]);
printf("u:%d\n",b[4]);
}

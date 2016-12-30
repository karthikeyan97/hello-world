#include<stdio.h>

main()
{
char *c,*b;
int count1=0,flag=0,count2=0,count3=0;
scanf("%[^\n]",c);
while(c[count2]!='\0')
{
	if((c[count2]!='a'&&c[count2]!='e'&&c[count2]!='i'&&c[count2]!='o'&&c[count2]!='u'&&c[count2]>'a'&&c[count2]<'z')||(c[count2]!='A'&&c[count2]!='E'&&c[count2]!='I'&&c[count2]!='O'&&c[count2]!='U'&&c[count2]>'A'&&c[count2]<'A'))
		b[count3++]=c[count2];
		count2++;
}
b[count3]='\0';
printf("%s",b);


}

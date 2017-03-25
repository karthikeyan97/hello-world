#include<stdio.h>
#include<stdlib.h>
struct  node;
struct node
{
	int a;
	struct node* ptrn;
};
struct node* createl()
{
	struct node* l;
	l=(struct node*)malloc(sizeof(struct node));
	l->ptrn=NULL;
	return l;
}
void insert(struct node*l,int b)
{
	int flag=0;
	while(l->ptrn!=NULL)
	{
		if(l->ptrn->a==b)
		{
			flag=1;
		}
		l=l->ptrn;
	}
	if(!flag)
	{
		l->ptrn=(struct node*)malloc(sizeof(struct node));
		l->ptrn->a=b;
		l->ptrn->ptrn=NULL;
	}
}
void insertu(struct node*l,int b,struct node *g)
{
	int flag=0;
	while(l->ptrn!=NULL)
	{
		if(l->ptrn->a==b)
		{
			flag=1;
		}
		l=l->ptrn;
	}
	if(!flag)
	{
		l->ptrn=(struct node*)malloc(sizeof(struct node));
		l->ptrn->a=b;
		l->ptrn->ptrn=NULL;
	}
	else
	{
		insert(g,b);
	}
}
void output(struct node*l)
{
	while(l->ptrn!=NULL)
	{
		printf("%d\n",l->ptrn->a);
		l=l->ptrn;
	}
}
int find(struct node* l,int b)
{
	int ind=1;
	while(l->ptrn!=NULL&&l->ptrn->a!=b)
	{
		l=l->ptrn;
		ind++;
	}
	if(l->ptrn)
	{
		return ind;
	}
	else
	{
		return 0;
	}
}
void ui(struct node*l,struct node*g,struct node*u,struct node*i)
{
	while(l->ptrn!=NULL)
	{
		insert(u,l->ptrn->a);
		l=l->ptrn;
	}
	while(g->ptrn!=NULL)
	{
		insertu(u,g->ptrn->a,i);
		g=g->ptrn;
	}
}
main()
{
	struct node *g=createl();
	struct node *f=createl();
	struct  node *e=createl();
	struct  node *h=createl();
	int fla=0,in1,in2=0,ind,key;
	do
	{
		  printf("enter the element to be inserted ");
		  scanf("%d",&in1);
		
		  insert(g,in1);
		  printf("\ndo you wish to insert another element 1-yes or 0-no\n");
		  scanf("%d",&in2);
	}while(in2!=0);
	do
	{
		  printf("enter the element to be inserted ");
		  scanf("%d",&in1);
		  insert(f,in1);
		  printf("\ndo you wish to insert another element 1-yes or 0-no\n");
		  scanf("%d",&in2);
	}while(in2!=0);
	ui(g,f,e,h);
	printf("e\n");
	output(e);
	printf("h\n");
	output(h);	
	
}

#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,j,fac=1,l,product=1,diaproduct=1;
	int a[3][3]={0,1,2,2,3,4,0,9,};
    scanf("%d",&n);
    
    for( i=0;i<n;i++)
       for(j=0;j<n;j++)
           {
            scanf("%d ",a[i][j]);
           }
    i=0;
    while(i<n)
    {
        for(l=i+1;l<n;l++)
            {
                if(a[i][i]==0)
                {
                fac=1;   
                }
                else
                {
                    fac=a[l][i]/a[i][i];
                
                    
                }
                    if(fac!=0)
                     product=fac*product;
                 
                for(j=0;j<n;j++)
                  {
                      a[l][j]=a[l][j]-fac*a[i][j];
                  }
                
            }
            i++;
    }
    for(i=0;i<n;i++)
    diaproduct=diaproduct*a[i][i];
    if(product==0)
    {
        printf("0");
    }
    else
    {
    printf("%d",diaproduct);
    }             
	return 0;
}


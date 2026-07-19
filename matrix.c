//matrix
#include<stdio.h>
void multiply(int b[3][3], int c[3][3], int temp[3][3])
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        
        for(j=0;j<3;j++)
        {
            temp[i][j]=0;
            for(k=0;k<3;k++)
            {
               
                 temp[i][j]=temp[i][j]+b[i][k]*c[k][j];
            
            }

        }
        
    }
    
}
void add(int a[3][3], int temp[3][3], int d[3][3])
{
    int i,j;
   for(i=0;i<3;i++)
    {        
        for(j=0;j<3;j++)
        {
            d[i][j]=a[i][j]+temp[i][j];
        }
    }
}
int main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3],i,j;
    printf("Enter first 3*3 matrix-A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
     
    printf("Enter second 3*3 matrix-B\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    
    printf("Enter third 3*3 matrix- C\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&c[i][j]);
        }
       
    }
    
    int temp[3][3];
    multiply(b,c,temp);
    add(a,temp,d);
    printf("A+B*C is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d   ",d[i][j]);
        }
       printf("\n") ;
    }
    return 0;
}
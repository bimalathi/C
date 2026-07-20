#include<stdio.h>
int main()
{
    int x,result,i;
    int p[10]={6,5,4,-3,2,8,-7};
    x=3;
    result=p[0];
    int m=0,k=0;
    //printf("Enter the degree of the polinomial\n");
    //scanf("%d",&n);
    //printf("Enter the coefficient of the polinomial\n");
    //for(i=n;i>=0;i--)
    //{
       // scanf("%d",&p[i]);
    //}

   // printf("Enter value of X \n");
   // scanf("%d",&x);
    for(i=1;i<=6;i++)
    {
          result=result*x+p[i];
          //printf("%d  ",result);
          m=m+2;
          k++; 
   }
    

    printf("p(3)= %d",result);
    printf("\nmultilication and addition : %d",m);
    printf("\nIterations : %d",k);

}
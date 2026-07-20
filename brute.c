#include<stdio.h>
 int power(int x,int d)
    {
        int pow=1;
        for(int j=0;j<d;j++)
        {
            pow=pow*x;
        }
        return pow;
    }
int main()
{
    int x,i,d;
    int p[10]={6,5,4,-3,2,8,-7};
    int mul=0,add=0;
    x=3;
    d=6;
    int result=0;
    
    for(i=0;i<=6;i++)
    {
          result=result+p[i]*power(x,d);
          d--;
          //printf("%d  ",result);
          mul=mul+d+1;
          add++; 
   }
     
    printf("p(3)= %d",result);
    printf("\nmultilication : %d\naddition : %d", mul,add);
    printf("\nIterations : %d",i);
    return 0;
}
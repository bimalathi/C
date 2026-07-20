#include<stdio.h>

int main()
{
    int a[100],n,smallest,pos;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("list\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(int j=0;j<n;j++)
    {
        smallest=a[j];
        pos=j;
        for(int k=j+1;k<n;k++)
        {
            if(smallest>a[k])
            {
                smallest=a[k];
                pos=k;
            }
        }
        a[pos]=a[j];
        a[j]=smallest;

    }
   
    printf("sorted list\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


}
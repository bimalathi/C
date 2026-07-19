#include<stdio.h>

int main()
{
    int a[100],i,n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("list\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }

     printf("sorted list\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
    
#include<stdio.h>
int splitList(int a[],int,int);
void merge(int a[],int,int,int);

int splitList(int a[],int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;

        splitList(a,left,mid);

        splitList(a,mid+1,right);

        merge(a,left,mid,right);

    }
}

void merge(int a[],int left,int mid,int right)
{
  
}


int main()
{
    int a[100],i,n;
    printf("ENter N");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("list is");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    splitList(a,n);
}

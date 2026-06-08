#include<stdio.h>
typedef struct{
    int data[100];
    int count;
}list;
void create(list *);

void create(list *start)
{
    for(int i=0;i<100;i++)
    {
        
     printf("enter value, put 0 to come out ");
     scanf("%d",&start->data[i]);
        if(start->data[i]==0)
        {
            break;
        }
     start->count=i;
    }
}
int main()
{
    int a=10;
    int *ptr;
    list l;
   create(&l);
   //printf("value of count is %d",l.data[0]);

}
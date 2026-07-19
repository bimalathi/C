#include<stdio.h>
typedef struct{
    int data[100];
    int count;
}list;
void create(list *);
void insert(list *,int,int);
void create(list *start)
{
    for(int i=0;i<100;i++)
    {
        
     printf("enter value for count %d, put -1 to come out ",i+1);
     scanf("%d",&start->data[i]);
     
        if(start->data[i]==-1)
        {
            break;
        }
     start->count=i+1;
    }
}
// insert value at position
void insert(list *start,int value,int pos)
{
    printf("%d",start->count);
    if(start->count==100)
    {
        printf("list is full\n");
        return;
    }
    else if(pos>start->count+1 || pos<0)
    {
        printf("position is out of range\n");
        return;
    } else if(start->count+1==pos)
    {
        start->data[pos]=value;
        start->count++;
    }else
    {
        for(int i=start->count;i>pos;i--)
        {
            start->data[i]=start->data[i-1];
        }
            start->data[pos]=value;
           
            start->count++;
           
    }
    
}
   
   
//main function   
int main()
{
    int value,pos;
    int *ptr;
    list l;
   create(&l);
   for(int i=0;i<l.count;i++)
   {
       printf("\n%d ",l.data[i]);
   }
   printf("\nenter a value to insert and position to insert\n");
   scanf("%d %d",&value,&pos);
   insert(&l,value,pos);
   //printf("value of count is %d",l.data[0]);
   for(int i=0;i<l.count;i++)
   {
       printf("\nupadted %d ",l.data[i]);
   }
   return 0;
}
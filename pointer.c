#include<stdio.h>
typedef struct{
    int data[100];
    int count;
}list;
void create(list *);

void create(list *start)
{
    printf("enter value ");
    scanf("%d",&start->data[0]);
    start->count=0;

}
int main()
{
    int a=10;
    int *ptr;
    list l;
   create(&l);
   printf("value of count is %d",l.data[0]);

}
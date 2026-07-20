#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}list;

list *create();
void traverse(list *);
list *insert(list *,int,int);
int count(list *);
list *delete(list *, int);


    int main()
    {       
        int item=10,c,element,key,key1;
        //list *head=(list *)malloc(sizeof(list));
        list *head=create();
        traverse(head);   
         
        printf("\nNo of elements - %d",c=count(head));
       
        printf("\nenter an element to insert");
        scanf("%d",&element);
        printf("\nenter a key value for insertion");
        scanf("%d",&key);
        head=insert(head,element,key); 
        traverse(head);
        printf("\nNo of elements - %d",c=count(head));
        printf("\nenter a key value for deletion");
        scanf("%d",&key1);
        head=delete(head,key1);
        traverse(head);
        printf("\nNo of elements - %d",c=count(head));

        return 0;
    }



 list *create()
{  
   int item;
   printf("enter value of list,enter -1 to exit ");
   scanf("%d",&item);
   if(item==-1)
   { 
     //node->next=NULL;
     return NULL;
   }
       list *node=(list *)malloc(sizeof(list));
        node->data=item;
        node->next=create();
        //create(node->next);
   
   return node;
}

void traverse(list *start)
{
    printf("\n");
    if(start!=NULL)
    {
        printf(" %d ",start->data);
        traverse(start->next);
    }
}

int count(list *head)
{
    if( head == NULL )
    {
        return 0;
    }
    else
       return(1+count(head->next));
}



list *insert(list *head,int e,int key)
{  
    int temp=0;
   // list *last;
   /* if(head->data==key)
        {
           list *new=(list *)malloc(sizeof(list));
            new->data=e;
            new->next=head;
            temp=1;
            head=new;
        } */
    for(list *i=head;i!=NULL;i=i->next)    
    {
            //  last=i; 
        if(i->data==key)
        {
           // printf("hii %d %d",i->data, i->next);
            list *new=(list *)malloc(sizeof(list));
            
            new->data=e;
            new->next=i->next;
            i->next=new;
            temp=1;
            return head;
            
        }
    }
        if(temp==0)
        {
            printf("Key value not found");
                       
        }
      
}

list *delete(list *head, int key)
{
    list *curr = head;
    list *prev = NULL;

    while(curr != NULL)
    {
        if(curr->data == key)
        {
            if(prev == NULL)      // first node
            {
                head = curr->next;
            }
            else
            {
                prev->next = curr->next;
            }

            free(curr);
            return head;
        }

        prev = curr;
        curr = curr->next;
    }

    printf("Key not found\n");
    return head;
}

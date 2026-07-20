#include<stdio.h>
int main()
{
    int n,num;

    FILE *fp=fopen("even.txt","w+");
    FILE *fp1=fopen("odd.txt","w+");
        
    printf("Enter the number limit\n");
    scanf("%d", &n);

    int number;
    if(fp==NULL || fp1==NULL)
    {
        printf("file not found\n");
        return 0;
    }


    printf("enter numbers\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number);
        if(number%2==0)
        {
            fprintf(fp,"%d ",number);

        }
        else
        {
            fprintf(fp1,"%d ",number);
        }
        
    }
 
   
    rewind(fp);
    rewind(fp1);
    
        
    printf(" \neven numbers\n");
    while(fscanf(fp,"%d",&num) !=EOF)
    {
    printf("%d ",num);
    }
    
    printf(" \nodd numbers\n");
    while(fscanf(fp1,"%d",&num) !=EOF)
    {
    printf("%d ",num);
    }


    fclose(fp);
    fclose(fp1);

    return 0;

}
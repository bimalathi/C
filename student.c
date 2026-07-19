#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int mark[5][4];
    int total[4];
    int grand;
};

int main()
{
    int n,i;
    n=1;           // number of student
    char sub[5][20]={"English","Maths","Science","Social","Hindi"};
    struct student s[n];
    for(i=0;i<n;i++) //student loop
    {
        
        s[i].roll=i+1;
        printf("Enter Student name\n");
        scanf("%s",s[i].name);
        
        for(int p=0;p<5;p++) // subject loop
        {
           
            for(int m=0;m<4;m++)  //term loop
            {
                
            printf("Enter term %d mark of %s\n",m+1, sub[p]);
            scanf("%d",&s[i].mark[p][m]);            
            
            }
        
        }
        s[i].grand=0;
        for (int h= 0; h < 4; h++)
        {   s[i].total[h]=0;
            for(int a=0;a<5;a++)
            {
                s[i].total[h]=s[i].total[h]+s[i].mark[a][h];
            }
            s[i].grand=s[i].grand+s[i].total[h];
        }
    }
   
    
    for(int j=0;j<n;j++)
    {
        printf("roll no : %d\n",s[j].roll);
        printf("Name  : %s\n",s[j].name);
        printf("subject \tterm 1  term 2  term 3  term 4\n");
        for(int p=0;p<5;p++)
        {
            printf("\n%s   \t",sub[p]);
            for(int m=0;m<4;m++)
            {

            printf(" %d \t",s[j].mark[p][m]);
            
            }
        }
        printf("\n\nTotal    \t");
        for(int t=0;t<4;t++)
        {
            printf("%d \t",s[j].total[t]);
        }
        printf("\n\nGrand Total \t : %d ",s[j].grand);
       printf("\n----------------------------------------------\n");
    }

return 0;
}
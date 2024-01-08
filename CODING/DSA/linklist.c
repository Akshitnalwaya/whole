#include<stdio.h>
#include<stdlib.h>
int main()
{
   typedef struct linklist
    {
        int a;
        struct linklist*next; 
        
    }node;
    node n1;
    scanf("%d",&n1.a);
    printf("%d",n1.next);
    int j;
    printf("Enter  first");
    scanf("%d",&n1.a);
    while (j)
    {
        int i;
        printf("ENTER");
        scanf("%d",&n1.a);
        switch (i)
        {
        case /* constant-expression */1:
            printf("next");
            scanf("%d",&n1.next);
        case 2: j=0;
        }
        
    }
   
    
   //  node a[4];
   //   printf("Enter elemrnt");
   //  for (int i = 0; i <4; i++)
   //  {
       
   //  scanf("%d",&a[i].a);
   //  a[i].next=&a[i].a;
   //  }
   //   printf(" elemrnt are");
   //   for (int  i = 0; i <4; i++)
   //   {
   //      printf("%d",*ptr.next);
    }
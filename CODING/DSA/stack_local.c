#include<stdio.h>
#include<stdlib.h>
int push(int [],int);
int  pop(int [],int);
void peek(int [],int);
void  display(int [],int);

int main()
{
    int stack[50];
int top=-1;
 int c;
 
while (1)
{
	printf("Press follwing to work:\n1-->push\n2-->poop\n3-->peek\n4-->display");
 scanf("%d",&c);
     switch (c)
 {
 case 1:
    {
        top =push(stack,top);
         break;
    }
   
    case 2: 
    {
        top =pop(stack,top);
        break;
    }
 case 3:
 {
    peek(stack,top);
    break;
 }
 case 4:
 {
    display(stack,top);
    break;
 }
}

}
}
int  push(int stack[],int top)
{
    if (top==49)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        printf("Enter the number");
        scanf("%d",&stack[top]);
    }    
    return top;
}
int  pop(int stack[],int top)
{
    if (top==-1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Deleted element is %d",stack[top]);
        top--;    
    }
    return top;
}
void peek(int stack[],int top)
{
    if (top==-1)
    {
        printf("Underflow");
    }
    else
    printf("The peek element is %d",stack[top]);
}
void display(int stack[],int top)
{
    if(top==-1)
    printf("Underflow");
    else
    {
    	for (int  i = 0; i <top; i++)
    {
        printf("The element are \n %d",stack[top]);
        printf("\n");
    }
	}
}
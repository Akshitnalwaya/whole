#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
int stack[50];
int top=-1;
int main()
{
 int c;
 
while (1)
{
	printf("Press follwing to work:\n1-->push\n2-->poop\n3-->peek\n4-->display");
 scanf("%d",&c);
     switch (c)
 {
 case 1:
    {
        push();
         break;
    }
   
    case 2: 
    {
        pop();
        break;
    }
 case 3:
 {
    peek();
    break;
 }
 case 4:
 {
    display();
    break;
 }
}

}
}
void push()
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
}
void pop()
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
}
void peek()
{
    if (top==-1)
    {
        printf("Underflow");
    }
    else
    printf("The peek element is %d",stack[top]);
}
void display()
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
#include<stdio.h>
int stack[5];
int top=-1;
int push();
int pop();
int main()
{
   int a;
   printf("Enter");
   scanf("%d",&a);
   switch (a)
   {
   case 1:push();
      
      break;
      case 2:
      pop();
      break;
   
   default:
      break;
   }
}
int push()
{
   printf("Enter");
   if(top==5)
   printf("full");
   else
   scanf("%d",&stack[top]);
   top++;
}
int pop()
{
   
   if(top==-1)
   printf("empty");
   else
   printf("Delted %d",stack[top]);
   top++;
}
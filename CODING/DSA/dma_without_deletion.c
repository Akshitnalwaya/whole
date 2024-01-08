#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,place,value;
    printf("Enter the number of storing\t");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));//is step me block craete hoge
   for(i=0;i<n;i++)
   scanf("%d",(p+i));
   for(i=0;i<n;i++){
   printf("\n%d",*(p+i));
   printf("\n%d",(p+i));}
   printf("\nEnter the place from 0-(count-1) and value\t");
   scanf("%d%d",&place,&value);
   for ( i = n+1; i >place; i--)
   {

   *(p+i)=*(p+i-1);
   }
   
    *(p+place)=value;

    for(i=0;i<n+1;i++)
   printf("%d\t",*(p+i));
}
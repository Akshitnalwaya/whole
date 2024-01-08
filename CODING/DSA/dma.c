/*
malloc function method
malloc(number of bytes)
ex. int i=5;
total bytes for i=4*5=20
malloc(20) or malloc(n*4)
malloc(nn*sizeofint)
now ab ye store kar ne ke baad ye us block ka addres return kare ga ab
 usko store kar ne liye ham usko pointers ki help se sttore kare ge


*p= malloc(n*sizeofint)  now it doesnot show wherter it is storing int,float,or char
because sizeof only show the size . malloc is a void function so we will typecast
it to int

int *p =int*malloc(sizeofint)
*/
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
    *(p+place)=value;
    // for(i=0;i<n;i++)
    // {
    //     if((p+i)==place)
    //     {printf("value");
    //     scanf("%d",&value);
    //     *(p+i)=value;}
        
    // }
    for(i=0;i<n;i++)
   printf("%d\t",*(p+i));
}
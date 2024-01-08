#include<stdio.h>
int main()
{
    int a[50];
    int size,postion,value,i;
    printf("ENTER THE SIZE");
    scanf("%d",&size);
    if (size>50)
    {
        printf("Overflow");
    }
    else{
        printf("Enter the element");
        for ( i = 0; i <size; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the Postion");
        scanf("%d",&postion);
        printf("Enter the value");
        scanf("%d",&value);
        for ( i =size-1; i >= postion-1; i--)
        {
            a[i+1]=a[i];
        }
        a[postion-1]=value;
        size++;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",a[i]);
    }
         
return 0;
}
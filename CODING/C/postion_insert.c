#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int postion,value,i;
    printf("Enter the number postion");
    scanf("%d",&postion);
    for (i = 0; i < 5; i++)
    {
       int j;
       j=sizeof (a[i])%sizeof (a[0]);
       //j=a[i];
       if (j=postion)
       {
        printf("Enter the value");
        scanf("%d",&a[i]);
        break;
       }
       else
       printf("Not valid postion");
       
    }
    printf("Element of array");
    for (int k = 0;k < 5; k++)
    {
        printf("\n%d",a[k]);
    }
    
    
return 0;
}

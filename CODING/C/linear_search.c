#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int search,i,turn=0;
    printf("Enter the number ");
    scanf("%d",&search);
    for (i = 0; i < 5; i++)
    {
        if (a[i]==search)
        {
            turn =1;
        }
        else
        turn =0;
    }
    if (turn =1)
    {
        printf("Found");
    }
    else
    printf("Not found");

return 0;
}

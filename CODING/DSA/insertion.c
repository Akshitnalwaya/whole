  #include<stdio.h>
  int main()
  {
      int ar[5],j=0;
      for (int i = 0; i <5; i++)
      {
          /* code */scanf("%d",&ar[i]);
      }
      printf("Checking");
      for (int i = 0; i <5; i++)
      {
        if (ar[i]>ar[i+1])
        {
          ar[i]=j;
          ar[i]=ar[i+1];
          ar[i+1]=j;
        }
        
      }
        for (int i = 0; i <5; i++)
      {
        printf("%d",&ar[i]);
      }
      
  }
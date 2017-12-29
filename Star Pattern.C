//C Program to print Star Pattern

#include <stdio.h>
#include <stdlib.h>

 main()
{
  int rowcount;
  printf("Enter the number of rows");
  scanf("%d",&rowcount);

  //This loop is for the total number of rows
  for(int i=1;i<=rowcount;i++)
  {
     //This loop is for printing Spaces
     for(int j=i;j<rowcount;j++)
      {
          printf(" ");
      }

      //This loop is for printing stars
      for(int k=1;k<i*2;k++)
      {
          printf("*");
      }

      printf("\n");
  }
}

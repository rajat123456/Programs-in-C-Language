//Program in C to print Half Pyramid Using *

#include <stdio.h>
#include <stdlib.h>

 main()
{
    int no_of_rows;
    printf("Enter the no of rows");
    scanf("%d",&no_of_rows);

    for(int i=0;i<no_of_rows;i++)
    {
       for(int j=0;j<=i;j++)
       {
           printf("*");
       }

       printf("\n");

    }
}

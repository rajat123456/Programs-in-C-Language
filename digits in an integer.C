//Program in C to count number of digits in an integer
#include <stdio.h>
#include <stdlib.h>

 main()
{
    int count=0;
    int number;
    printf("Enter the number");
    scanf("%d",&number);

    while(number!=0)
    {
        number/=10;
        ++count;
    }

    printf("Number of Digits are %d ",count);

}
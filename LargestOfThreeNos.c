
//C Program to find Largest of Three Numbers Using Nested if

#include <stdio.h>
#include <stdlib.h>
main()
{
    int num1,num2,num3;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%d is greatest among 3",num1);
        }
        else
        printf("%d is greatest among 3",num3);
    }


    if(num2>num1)
    {
        if(num2>num3)
        {
            printf("%d is greatest among 3",num2);
        }
        else
        printf("%d is greatest among 3",num3 );
    }


}

//Number is Prime or not

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    int flag=0;
    printf("Enter any number");
    scanf("%d",&num);

    //iterating to the middle of that number, if we won't find any factor till middle, then no chance to find any factor after middle
    for(int i=0;i<=num/2;i++)

    {
         if(num%i==0)
         {
         flag=1; //if we found any 1 factor then we do flag=1 and break out of loop
         break;
         }
    }

    if(flag==0)

    {
        printf("%d is a prime number",num);
    }

    else

        printf("%d is not a prime number",num);

    return 0;

}

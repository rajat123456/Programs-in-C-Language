//Number is Prime or not

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    int flag=0;
    printf("Enter any positive number greater than 1");
    scanf("%d",&num);

    if(num==0||num==1)
    {
      printf("%d is not prime",num);
      return 0; //simply return if num=0 or 1
      
    }
   
    //iterating to the middle of that number, if we won't find any factor till middle, then no chance to find any factor after middle
    for(int i=2;i<=num/2;i++) //here starting from 2, since 1 is not pirme and prime numbers start from 2

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

//C Program to find whether number is palindrom or not

/*
Steps->  1) Reverse the original number
         2) Store that reversed number in a variable
         3) Compare the reversed and the original variable 
*/

#include <stdio.h>
#include <stdlib.h>

 main()
{
  int number;
  int reverse=0;
  int remainder;
  int num;
  printf("Enter the number");
  scanf("%d",&number);

 num=number;
while(num!=0)
{
   remainder=num%10;
   reverse=reverse*10+remainder;
   num=num/10;
}
 
 (reverse==number)?printf("%d is palindrom ",number):printf("%d is not a palindrom ",number);

  }

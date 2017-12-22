//C program to demonstrate SimpleCalculator

#include <stdio.h>
#include <stdlib.h>

int main()
{
   double num1,num2;
   char operator;
   printf("Enter 2 numbers");

   //lf is format specifier for double
   scanf("%lf %lf",&num1,&num2);
   printf("Enter the operation to perform[+, -, /, *, %]");
   scanf("%c",&operator);
   switch(operator)
   {
       case '+': printf("Addition of %lf %lf is %lf ",num1,num2,num1+num2);
                 break; //break statements to avoid fall through in switch cases
       case '-': printf("Subtraction of %lf %lf is %lf ",num1,num2,num1-num2);
                 break;
       case '/': printf("Multiplication of %lf %lf is %lf ",num1,num2,num1*num2);
                 break;
       case '*': printf("Division of %lf %lf is %lf ",num1,num2,num1/num2);
                 break;
       case '%': printf("Remainder of %lf %lf is %lf ",num1,num2,num1%num2);
                 break;
       default : printf("Enter valid operator");
   }
    return 0;
}

//Demonstration of boolean data type in C and infinite loop conditions

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //should include this header file to use boolean in C, but in C++, without including it runs perfectly
int main()
{
   double num1,num2;

   //bool is used as boolean data type in C and C++
    bool a=532; //bool can take-> true, false, and any numbers

   while(a) //0 and false are regarded as false, rest all are regarded as true like 1,-1,-100,543 these all are true
   {
      printf("INF");
   }

    return 0;
}

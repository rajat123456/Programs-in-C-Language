//Program in C to Convert Fahrenheit to Celsius

#include <stdio.h>
#include <stdlib.h>

 main(void)
{
    int lower,upper,step;
    float fahr,celc;
    printf("Enter the lower i.e, from where to start conversion");
    scanf("%d",&lower);
    printf("Enter the upper i.e, upto which conversion is done");
    scanf("%d",&upper);
    printf("Enter the step size i.e, increment");
    scanf("%d",&step);
    fahr=lower;
    printf("Fahrenheit \t Celsius \n_________________________\n");
    while(fahr<=upper)
    {
      celc=(5.0/9.0)*(fahr-32.0);
      printf("%3.0f \t\t %6.1f \n",fahr,celc);
      fahr+=step;
    }

    }

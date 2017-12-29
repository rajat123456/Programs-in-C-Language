//C Program for Armstrong Number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 main()
{
    int count=0;
    int number;
    int result=0;
    int num;
    int remainder;
    printf("Enter the number");
    scanf("%d",&number);

    //SInce we do manipulations on number, so to save original number, we are storing it in another number
    num=number;

    //First finding out, how many digits are present inside that number
    while(num!=0)
    {
        num/=10;
        ++count;
    }

    num=number;
    while(num!=0)
    {
        remainder=num%10;
        result+=pow(remainder,count);
        num/=10;
    }

    (result==number)? printf("%d is an Armstrong number",number): printf("%d is not an Armstrong number",number);

}

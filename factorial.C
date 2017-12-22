// WAP for factorial of a number

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;

    //long long because factorial grows very rapidly, and unsigned because we want to take only positive values
    unsigned long long factorial=1;
    printf("Enter any positive number");
    scanf("%d",&num);

    if(num==0||num<0)
    {
        // llu is format specifier for unsigned long long
        printf("Factorial of %d is %llu",num,factorial);
        return 0;
    }
    //iterating to the middle of that number, if we won't find any factor till middle, then no chance to find any factor after middle
    for(int i=2;i<=num;i++)

    {
        factorial*=i;
    }

        printf("Factorial of %d is %llu",num,factorial);

    return 0;

}

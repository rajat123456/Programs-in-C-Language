//C Program to print Fibonacci Series

#include <stdio.h>
#include <stdlib.h>

 main()
{
  int first;
  int second;
  int sum;
  int count=0;
  int num;
  printf("Enter the no of terms you want to display in the fibonacci series");
  scanf("%d",&num);
  printf("Enter the First number");
  scanf("%d",&first);
  printf("Enter the Second number");
  scanf("%d",&second);
  printf("First and Second numbers are %d %d remaining %d terms are ",first,second,num);
  while(count<num)
  {
      sum=first+second;
      printf("%d ",sum);
      first=second;
      second=sum;
      count++;
  }

  }

#include<stdio.h>
//swapping of numbers
main()
{ printf("Enter two numbers:");
  int a,b;
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("the two numbers swapped are %d and %d",a,b);
  return 0;

    
}

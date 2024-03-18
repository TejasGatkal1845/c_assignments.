#include<stdio.h>
int factorial(int n1);

int main(void)
{ 
 int num,result;

 printf("enter the number:\n");
 scanf("%d",&num);

 result = factorial(num);
 printf("factorial of %d is %d\n",num,result);

 return 0;
}


int factorial(int n1)
{ 
  if(n1 == 0)
   return 1;

  else
    return n1 * factorial(n1 - 1);
 

}

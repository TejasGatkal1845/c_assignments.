#include<stdio.h>
int main(void)
{
 int num,flag=0;

 printf("enter the number:\n");
 scanf("%d",&num);

 for(int i=2 ;i<=num/2; i++)
 {
  if(num%i == 0)
   flag=1;
  
 }

 if(flag ==0)
  printf("it is a prime number\n");
 else
  printf("it is not a prime number\n");

 return 0;
}

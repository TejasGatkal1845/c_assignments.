#include<stdio.h>
int main(void)
{
 int num;

 printf("enter the number:\n");
 scanf("%d",&num);

 int fact = 1;

 for(int i=1;i != num + 1; i++)
  
   fact = fact * i;
  
 printf("factorial is %d\n",fact);
 

 return 0;
}

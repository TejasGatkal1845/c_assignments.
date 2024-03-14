#include<stdio.h>
int main(void)
{
 int num;

 printf("enter the number:\n");
 scanf("%d",&num);

 int i=2;
 while(i != num/2)
{

 if(num % i == 0)
 {
  num = (num/2);
  printf("%d*",i); 
 }
   i++; 
}

 printf("\b\n");

 return 0;
}

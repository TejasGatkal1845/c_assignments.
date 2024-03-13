#include<stdio.h>
int main(void)
{
 int num;
 printf("enter the number\n");
 scanf("%d",&num);

 int i = 1;
 while(i != num)
 {
  if(num%i == 0)
   printf("%2d,",i);
 
   
    i++;

 }

 printf("\b\b\n");

 return 0;
}

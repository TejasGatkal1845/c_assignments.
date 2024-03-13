#include<stdio.h>
int main(void)
{
 int num;

 printf("enter the number:\n");
 scanf("%d",&num);

 int fact=1,i=1;

 while(i <= num)
 {
  printf("%d *",i);
  fact = fact * i; 
 
   i++;
 }

 printf("\b= %d\n",fact);

 return 0;

}

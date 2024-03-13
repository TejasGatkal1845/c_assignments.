#include<stdio.h>
int main(void)
{
 int num;

 printf("enter the number\n");
 scanf("%d",&num);

 int fact=1;

 while(num != 0)
 {
  printf("%d *",num);

  fact = fact * num;
  num--;
 

 }

 printf("\b=%d\n",fact);



 return 0;
}

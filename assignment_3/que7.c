#include<stdio.h>
int main(void)
{
 int num;

 printf("enter the number\n");
 scanf("%d",&num);

 int i=1;

 while(i != num)
 {
  if(num%i == 0)
  {
    if(i < num/i)
  
      printf("%d * %d = %d\n",i,num/i,num);
  }
   i++;
  
 }
 

 return 0;
}

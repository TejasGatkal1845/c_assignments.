#include<stdio.h>

void prime_no(int n1);
int flag = 0;
int main(void)
{
 int num;

 printf("enter the number :\n");
 scanf("%d",&num);

 prime_no(num);


 return 0;
}
 
void prime_no(int n1)
{
 int i=2;
 while(i != n1)
 {
  if(n1%i ==0)
     flag = 1;    
  i++; 
 }


 if(flag == 1)
    printf("it is not a prime number\n");
 else
  printf("it is prime number\n");
 
 
}

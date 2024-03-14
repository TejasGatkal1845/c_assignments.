#include<stdio.h>
int main(void)
{
 int n1= 0,n2= 1,n3,num;

 printf("enter the number:\n");
 scanf("%d",&num);

 printf("%2d,",n2);

 for(int i =1; i< num; i++)
 {
  n3=n1 + n2;

  printf("%2d,",n3);

  n1=n2;
  n2=n3;

 }

 printf("\b \n");

 return 0;
}

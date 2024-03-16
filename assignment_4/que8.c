#include<stdio.h>

void fibonacci(int n1,int n2,int n3,int num4);

int main(void)
{
 int num1=0,num2=1,num3=0,num;

 printf("enter the number how much element do you wamt:\n");
 scanf("%d",&num);

 printf("%3d %3d",num1,num2);

 fibonacci(num1,num2,num3,num);

 printf("\n");
 return 0;
}


void fibonacci(int n1,int n2,int n3,int num4)
{ 
 int i=1;
 while(i != num4)
 {
   n3 = n1 + n2;

   printf("%3d",n3);

   n1=n2;
   n2=n3;
   i++;
 }


}

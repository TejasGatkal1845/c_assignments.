#include<stdio.h>
void binary(int n1);

int main(void)
{
 int num;
  
 printf("enter the number:\n");
 scanf("%d",&num);

 binary(num);
 
 printf("\n");

 return 0;
}

void binary(int n1)
{
 if(n1 > 1)
  binary(n1/2);

 
 printf("%2d",n1%2);


}

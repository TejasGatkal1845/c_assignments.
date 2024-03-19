#include<stdio.h>
void hexadecimal(int n1);

int main(void)
{
 int num;
  
 printf("enter the number:\n");
 scanf("%d",&num);

 hexadecimal(num);
 
 printf("\n");

 return 0;
}

void hexadecimal(int n1)
{
 if(n1 > 1)
  hexadecimal(n1/16);

 
 printf("%d",n1%16);


}

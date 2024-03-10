#include<stdio.h>
int main()
{

 float num,price,discount;

 printf("enter the number of quantity you want:\n");
 scanf("%f",&num);

 if(num>30 && num<50)
 {
  discount = ((num*5)*0.1);
  price = (num*5) - discount;
  printf("price of quantity is %f\n",price);
 }
 else if(num>=50)
 {
  discount = ((num*5)*1.5);
  price = (num*5) - discount;
  printf("price of quantity is %f\n",price);
 }
 else if(num<=30) 
 {
  price= (num*5);
  printf("price of quantity is %f\n",price);
 }
  
 return 0;
}

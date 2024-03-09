#include<stdio.h>
int main()
{
 float d,T;

 printf("enter the temperature in fahrenheit=");
 scanf("%f",&d);

 T =5*(d-32)/9;

 printf("temperature in celsius is=%.2f\n",T);
  
 return 0;
}

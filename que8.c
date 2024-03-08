#include<stdio.h>
int main()
{
 int a,b,c;
 float avg;

 printf("enter the number a=");
 scanf("%d",&a);
 printf("enter the number b=");
 scanf("%d",&b);
 printf("enter the number c=");
 scanf("%d",&c);
 
 avg=(float)(a+b+c)/3;

 printf("average of number is = %f\n",avg);


 return 0;
}

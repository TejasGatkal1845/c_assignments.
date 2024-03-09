#include<stdio.h>
#include<math.h>

int main()
{
 int a,b,c;
 float area,perimeter,s;

 printf("enter the number a=");
 scanf("%d",&a);

 printf("enter the number b=");
 scanf("%d",&b);

 printf("enter the number c=");
 scanf("%d",&c);

 perimeter= a + b + c;
 s = perimeter/2;
 area= sqrt(s * (s-a) * (s-b) * (s-c));


 printf("area of triangle is =%.3f\n",area);
 printf("perimeter of triangle is =%.3f\n",perimeter);
 return 0;
}

#include<stdio.h>
int main()
{
 float n1,n2,add,sub,mul,div;
 int op;

 printf("enter the two number:\n");
 scanf("%f\n%f",&n1,&n2);

 printf("1.add,2.sub,3.mul,4.div\n");

 printf("enter the operand:");
 scanf("%d",&op);

 switch(op)
 {
  case 1:
   {
     add=n1+n2;
	 printf("addition of %f + %f = %f \n",n1,n2,add);

   }
       break;
 
  case 2:
   {
     sub=n1-n2;
	 printf("subtraction of %f - %f = %f \n",n1,n2,sub);

   }
       break;

  case 3:
   {
     mul=n1*n2;
	 printf("multiplication of %f * %f = %f \n",n1,n2,mul);

   }
       break;

  case 4:
   {
     div=n1/n2;
	 printf("division of %f / %f = %f \n",n1,n2,div);

   }
       break;

 }


 return 0;
}

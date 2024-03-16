#include<stdio.h>

int flag = 0;
float calculator(float n1,float n2,char opr);
int main(void)


{
 float num1,num2,result;
 char op;

 printf("enter the two number:\n");
 scanf("%f %f",&num1,&num2);

 printf("enter the operator:\n");
 scanf("%*c%c",&op);


 result = calculator(num1,num2,op);
 if(flag == 0)
 {
  
 
   printf("result is %f\n",result);
 }
 else
 {
 
   flag=0;
 }

 return 0;
}



float calculator(float n1,float n2,char opr)
{ 
 int res;
 if(opr == '+')
 {

   res=n1 + n2;
   return res;
 }
 if(opr== '-')
 {
  res=n1 - n2;
  return res;
 }

 if(opr== '*')
 {
  res=n1 * n2;
  return res;
 }


 if(opr== '/')
  { 
    if(n2 == 0)
    {
      printf("can not divide by zero\n"); 
      flag =1;
  
    }
    else
    {
      res=n1 / n2;
      return res;
    }
  }

}

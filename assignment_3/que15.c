#include<stdio.h>
int main(void)
{
 float num1,num2,addd,subb,mull,divv;
 
 typedef enum{exit=0,add,sub,mul,div} operator;
 operator op;

do{
    printf("enter two numbers:\n");
	scanf("%f %f",&num1,&num2);
   
    printf("0.exit,1.add,2.sub,3.mul,4.add\n");
    printf("enter the choice \n");   
    scanf("%d",&op);

    switch(op)
	{
      case add:
	  {
            addd = num1 + num2;
			printf("%f + %f = %f\n",num1,num2,addd);
	  }
	   break;

      case sub:
	  {
            subb = num1 - num2;
			printf("%f - %f = %f\n",num1,num2,subb);
	  }
	   break;

      case mul:
	  {
            mull = num1 * num2;
			printf("%f * %f = %f\n",num1,num2,mull);
	  }
	   break;

      case div:
	  {
	    if(num2 == 0)
		{
           printf("can not divide by zero\n");
		}
		else
		{
            divv = num1 / num2;
         	printf("%f / %f = %f\n",num1,num2,divv);
		}
	  }

	   break;

      default:
	  {
           
			printf("invalid operator\n");
	  }
	   break;
      case exit:
	  {
            
          printf("THANK YOU\n");

	  }
	   break;

	

	}
	printf("enter 0 to exit or 1 to continue:\n");
	scanf("%d",&op);

  }while(op != exit);

  
 return 0;

}

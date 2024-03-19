#include<stdio.h>
void sum_pro(int n1,int n2,int *add,int *prod);

int main(void)
{
 int num1,num2,sum,pro;

 printf("enter the two number num1 and num2:\n");
 scanf("%d %d",&num1,&num2);
 
 sum_pro(num1,num2,&sum,&pro);

 printf("sum of two number is = %d\n",sum);
 printf("product of two number is = %d\n",pro);

 return 0;
}

void sum_pro(int n1,int n2,int *add,int *prod)
{
 *add = n1 + n2;
 //printf("sum of two number is = %d\n",*add);

  *prod = n1 * n2;

// printf("product of two number is = %d\n",*prod);


}

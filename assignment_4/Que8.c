#include<stdio.h>

void swap(int *pn1,int *pn2);
int main(void)
{
 int num1,num2;

 printf("enter the number:\n");
 scanf("%d %d",&num1,&num2);

 printf("before swap num1 =%d  num2 =%d \n",num1,num2);

 swap(&num1,&num2);

 printf("after swap num1 =%d  num2 =%d\n",num1,num2);

 return 0;
}

void swap(int *pn1,int *pn2)
{
 int temp;

 temp = *pn1;
 *pn1 = *pn2;
 *pn2 = temp;


}

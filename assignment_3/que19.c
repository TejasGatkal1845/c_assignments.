#include<stdio.h>
int main(void)
{
 int num1,num2;

 printf("enter the two number for range of table:\n");
 scanf("%d %d",&num1,&num2);

 for(int i=num1;i<=num2;i++)
 {
  for(int j=1;j<=10;j++)
  {

    printf("%d * %d = %d\n",i,j,i*j);

  }
  printf("\n");
 }


 return 0;
}

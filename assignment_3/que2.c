#include<stdio.h>
int main()
{
 int num;

 printf("enter the number:");
 scanf("%d",&num);

 int i=1;
 while(i != 11)
 {

  printf("%d * %d = %d\n",num,i,num*i);

  i++;
 }


 return 0;
}

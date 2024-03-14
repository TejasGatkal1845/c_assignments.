#include<stdio.h>
int main(void)
{
 int base,index;

 printf("enter the base and index:\n");
 scanf("%d %d",&base,&index);

 int powerr = 1;
 for(int i =1;i <= index; i++)
 {
   powerr = powerr * base;
 }

 printf("power is %d \n",powerr);

 return 0;
}

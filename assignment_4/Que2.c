#include<stdio.h>

int powerr(int bas,int ind);

int main(void)
{
 int base,index,result;

 printf("enter the base and index:\n");
 scanf("%d %d",&base,&index);

 result = powerr(base,index);

 printf("the power is = %d\n",result);


 return 0;
}

int powerr(int bas,int ind)
{
 if(ind == 0)
  return 1;

 else
  return bas * powerr(bas , ind -1);
 


}

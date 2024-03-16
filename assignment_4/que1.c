#include<stdio.h>

int fact(int n1);

int main()

{
 int num,result;

 printf("enter the number:\n");
 scanf("%d",&num);

 result=fact(num);
 printf("factorial of %d is %d\n",num,result); 
 return 0;
}

int fact(int n1)
{ 
 int res=1;
 for(int i=1;i<=n1;i++)
 {

   res=res*i;
 
 }
 return res;
}

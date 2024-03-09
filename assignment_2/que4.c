#include<stdio.h>
int main()

{
 int n1,n2;

 printf("enter the number n1=");
 scanf("%d",&n1);


 printf("enter the number n2=");
 scanf("%d",&n2);

 if(n1>n2)
  printf("n1 is greater than n2\n");
 else
  printf("n2 is greater than n1\n");

 //----------------------------------------------------
 
 (n1>n2)? printf("n1 is greater than n2\n") : printf("n2 is greater than n1\n");


 return 0;
}

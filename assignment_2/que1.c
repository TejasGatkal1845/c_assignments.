#include<stdio.h>
int main()
{

 float n1,n2,ans;

 printf("enter a number n1=");
 scanf("%f",&n1);


 printf("enter a number n2=");
 scanf("%f",&n2);

 if(n2==0)
  printf("Error can not divide by zero\n");

 else
 {
  ans=n1/n2;
  printf("ans is = %.2f\n",ans);
 }
 return 0;
}

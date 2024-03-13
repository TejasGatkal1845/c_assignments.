#include<stdio.h>
int main(void)
{

 int num,temp;

 printf("enter the number:\n");
 scanf("%d",&num);

 temp=num;

 int rem,sum=0,rev=0,arm=0;
 while(temp > 0)
 {
  

  rem = temp%10;
  sum = sum + rem;
  rev = rev*10 + rem;
  arm = arm +(rem * rem *rem);
  temp = temp/10;


 }

 printf("the sum is %d\n",sum);
 
 printf("the reverse number is %d\n",rev);
 
 if(num == rev)
  printf("%d is a numeric palindrome\n",num);
 else
 {
  printf("%d is not a palindrome\n",num);
 }

 if(num == arm)
  printf("%d is an armstrong number\n",arm);
 else
  printf("%d is an armstrong number\n",arm);



 return 0;
}

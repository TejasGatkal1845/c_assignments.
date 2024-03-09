#include<stdio.h>


int main()
{
 int num,temp;

 printf("enter the 5 digit number\n");
 scanf("%d",&num);

  temp=num;
  int rem,res=0;

  rem=temp%10;
  res=res*10 + rem;
  temp=temp/10;
 
  rem=temp%10;
  res=res*10 + rem;
  temp=temp/10;
 

  rem=temp%10;
  res=res*10 + rem;
  temp=temp/10;

  rem=temp%10;
  res=res*10 + rem;
  temp=temp/10;

  rem=temp%10;
  res=res*10 + rem;
  temp=temp/10;

 if(num==res)
  printf("%d is palindrome\n",num);
 else
  printf("%d is not palindrome\n",num);
 

 return 0;
}

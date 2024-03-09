#include<stdio.h>
int main()
{
 int num;

 printf("enter the number\n");
 scanf("%d",&num);

 if((num>=65 && num<=90) || (num>=97 && num<=122))
 {
   printf("%d is %c in character\n",num,num);

 }
 
 
  printf("%d is %d in decimal number\n",num,num);
  printf("%d is %o in octal  number\n",num,num);
  printf("%d is %x in hexadecimal number\n",num,num);
 
 
 return 0;
}

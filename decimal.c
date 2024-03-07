#include<stdio.h>
int main()
{
 int num;
 printf("enter the number=");
 scanf("%d",&num);

 printf("%d is decimal number\n",num);

 printf("%d is %o in  octal number\n",num,num);

 printf("%d is %x in  hexadecimal number\n",num,num);

 return 0;
}

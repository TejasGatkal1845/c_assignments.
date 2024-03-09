#include<stdio.h>
int main()
{
 int num;
 printf("enter the number");
 scanf("%d",&num);

 if((num>=65 &&  num<=90) ||(num>=97 && num<=122))
 {
  printf("%d  is a %c character\n",num,num);
  }
 else
 {
  printf("%d other than character\n",num);
 }
 printf("%d is %o in octal number\n",num,num);
 printf("%d is %x in hexa decimal\n",num,num);
 return 0;
}

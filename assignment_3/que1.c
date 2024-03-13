#include<stdio.h>
int main(void)
{
 int num;
 char ch;

 printf("enter the character and the number:\n");
 scanf("%c %d",&ch,&num);

 while(num != 0)
 {
  printf("%-2c",ch);
  num--;
  
 }
 printf("\n");

 return 0;
}

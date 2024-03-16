#include<stdio.h>

void multiple_character(c,n1);

int main(void)
{
 int num;
 char ch;

 printf("enter the character:\n");
 scanf("%c",&ch);


 printf("enter the number:\n");
 scanf("%d",&num);

 multiple_character(ch,num);
 

 return 0;
}


void multiple_character(c,n1)
{

 int i=1;
 while(i <= n1)
 {
  printf("%c ",c);

   i++;
 }
 printf("\n");
}

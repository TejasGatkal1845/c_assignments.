#include<stdio.h>

void leap_year(int n1);

int main(void)
{
 int year;

 printf("enter the year:\n");
 scanf("%d",&year);

 leap_year(year);

 return 0;
}

void leap_year(int n1)
{
 if((n1%4 == 0 && n1%100 != 0) ||  (n1%400 ==0))
  printf("it is a leap year\n");

 else
  printf("it is not a leap year\n");

}

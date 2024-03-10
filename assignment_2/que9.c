#include<stdio.h>
int main()

{
 int year,month;

 printf("enter the year:\n");
 scanf("%d",&year);

 printf("enter the month:\n");
 scanf("%d",&month);

 if((month==2 || year%400==0) && (year%4==0 ||  year/100==0))

 {
   printf("it is a leap year having 366 days\n");
   printf("it has 29 days\n");
 }
 else if(month==2)
  printf("it has 28 days\n");

 else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
  printf("it has 31 days\n");

 else if(month==4 || month==6 || month==9 || month==11)
  printf("it has 30 days\n");


 return 0;
}

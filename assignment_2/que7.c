#include<stdio.h>
int main()
{
 int num;

 printf("enter the year:\n");
 scanf("%d",&num);
 
 if(num%400==0)
  printf("it is leap year having 366 days\n");
 else if(num%100==0)
  printf("it is leap year having 366 days\n");
 else if(num%4==0) 
  printf("it is leap year having 366 days\n");
 else
  printf("it is not leap year, it having 365 days\n");

 
 //**********************************************************************


 if(num%400==0  ||  num%4==0)
  printf("it is a leap year having 366 days\n");
 else
  printf("it is not leap year, it having 365 days\n");


//************************************************************************


 (num%4==0  || num%4==0)?printf("it is leap year having 366 days\n") :printf("it is not a leap year, it having 365 days\n");


 return 0;

}

#include<stdio.h>
int main()
{
 int month,year;

 printf("enter the year:\n");
 scanf("%d",&year);

 printf("enter the month:\n");
 scanf("%d",&month);


 switch(month)
  {
    case 1:
	 printf("january has 31 days\n");
             break;	  
    case 2:
	{
	  if((year%400==0 || year%4==0) || year/100==0)
	  {
	  printf("february has 29 days\n");
      }
	  else
	  {
      printf("february has 28 days\n");
	  }
	}
	   break;

    case 3:
	 printf("march has 31 days\n");
          break;
    case 4:
	 printf("april has 30 days\n");
          break;
    case 5:
	 printf("may has 31 days\n");
		  break;
    case 6:
	 printf("june has 30 days\n");
          break;
    case 7:
	 printf("july has 31 days\n");
          break;
    case 8:
	 printf("august has 31 days\n");
          break;
    case 9:
	 printf("september has 30 days\n");
          break;
    case 10:
	 printf("october has 31 days\n");
          break;
    case 11:
	 printf("november has 31 days\n");
          break;
    case 12:
	 printf("december has 31 days\n");
          break;
    
	}

 return 0;
}

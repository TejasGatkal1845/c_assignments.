#include<stdio.h>
int main()
{
 int n1,n2,n3;

 printf("enter the 3 numbers:\n");
 scanf("%d\n%d\n%d",&n1,&n2,&n3);

 if(n1>n2)
  {
     if(n1>n3)
	  printf("n1 is greater number\n");

	 else
	  printf("n3 is greater number\n");

  }
 
 else
  printf("n2 is greater\n");

//************************************************

 (n1>n2)?((n1>n3)?printf("n1 is greater\n"):printf("n3 is greater\n")):printf("n2 is greater\n");


 return 0;
}

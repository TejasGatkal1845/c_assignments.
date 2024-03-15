#include<stdio.h>
int main(void)
{
 int i=1;
 for(i;i<=5;i++)
 {
  for(int j=1;j<=i;j++)
  {
   printf("* ");
  }
   printf("\n");
 } 


printf("#################################################\n");

{
 
 for(int i=5;i>=1;i--)
 {
  for(int j=1;j<=i;j++)
  {
    printf("* ");
    
  }
   printf("\n");
    
 }

}

printf("#######################################################\n");

{


 int i=1;
 for(i;i<=5;i++)
 {
  for(int j=1;j<=i;j++)
  {
   printf("%d ",j);
  }
   printf("\n");

 }

}

printf("####################################################\n");


{
 
 for(int i=5;i>=1;i--)
 {
  for(int j=5;j>= i;j--)
  {
    printf("%d ",j);
    
  }
   printf("\n");
    
 }

}


 return 0;
}

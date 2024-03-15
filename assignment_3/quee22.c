#include<stdio.h>
int main()
{
 int ch=65;
 for(int i=1;i<=4;i++)
 {
  for(int j=1;j<=i;j++)
  { 
     
    printf("%3c",(char)ch++);
	
  }
  
  printf("\n");
 }


printf("########################################\n");



{
 
 for(int i=1;i<=4;i++)
 { 

  for(int j=i;j<=4;j++)
  { 
     
    printf("%3c",(char)(j+64));
	
  }

  
  printf("\n");
 }

}

 return 0;
}

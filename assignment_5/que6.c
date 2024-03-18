#include<stdio.h>

void accept_array(int *ptr,int size);
void print_array(int *ptr,int size);
void unique_array(int *ptr,int size);

int main(void)

{
 int Size;
 printf("enter the size of array:\n");
 scanf("%d",&Size);
 
 int arr[Size];

 accept_array(arr,Size);
 print_array(arr,Size);

 unique_array(arr,Size);
// print_array(arr,Size);


 return 0;
}


void accept_array(int *ptr,int size)
{
 int i=0;
 for(i=0;i<=size -1;i++)
 {
   printf("arr[%d]= ",i);
   scanf("%d",&ptr[i]);

 }
 printf("\n");
 
}

void print_array(int *ptr,int size)
{
 int i=0;
 for(i=0;i<=size -1;i++)
 {
   printf("arr[%d]=%d\n",i,ptr[i]);

 }
  printf("\n");
}

void unique_array(int *ptr,int size)
{ int flag;
  for(int i=0;i<= size -1 ;i++)
  {
   flag=1;
   for(int j=i+1;j<= size -1; j++)
   {
       if(ptr[i] == ptr[j])
	     flag =0;
		 break;
       
   }

    if(flag==1)
         printf("%d\n",ptr[i]);	  

  } 
   
}

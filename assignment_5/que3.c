#include<stdio.h>

void accept_array(int *ptr,int size);
void print_array(int *ptr,int size);
void reverse_array(int *ptr,int size);

int main(void)

{
 int Size;
 printf("enter the size of array:\n");
 scanf("%d",&Size);
 
 int arr[Size];

 accept_array(arr,Size);
 print_array(arr,Size);
 reverse_array(arr,Size);
 print_array(arr,Size);
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


void reverse_array(int *ptr,int size)
{
 int i,j,temp;
 for(i=0,j=size - 1;i< j; i++,j--)
 { 
 
      temp = ptr[i];
	  ptr[i] = ptr[j];
      ptr[j] = temp;

  
 }

 printf("\n");
}

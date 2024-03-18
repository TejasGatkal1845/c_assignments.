#include<stdio.h>

void accept_array(int *ptr,int size);
void print_array(int *ptr,int size);
int  max_element(int *ptr,int size);

int main(void)

{
 int Size;
 printf("enter the size of array:\n");
 scanf("%d",&Size);
 
 int arr[Size],max;

 accept_array(arr,Size);
 print_array(arr,Size);

 max = max_element(arr,Size);
 printf("maximum element is = %d\n",max);

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


int  max_element(int *ptr,int size)
{
  int max = 0;
  for(int i =0; i<= size - 1; i++)
  {
     if(ptr[i] > max)
	  max = ptr[i];
  }

 return max;
 printf("\n");
}

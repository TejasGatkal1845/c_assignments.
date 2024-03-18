#include<stdio.h>

void accept_array(int *ptr,int size);
void print_array(int *ptr,int size);
void selection_sort(int *ptr,int size);
void bubble_sort(int *ptr,int size);

int main(void)

{
 int Size;
 printf("enter the size of array:\n");
 scanf("%d",&Size);
 
 int arr[Size];

 accept_array(arr,Size);
 print_array(arr,Size);

 selection_sort(arr,Size);
 print_array(arr,Size);

 bubble_sort(arr,Size);
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


void selection_sort(int *ptr,int size)
{ 
  int temp;
  for(int i =0; i<= size - 1; i++)
   for(int j=i+1 ; j<= size - 1;j++)
     if(ptr[i] >= ptr[j])
	 {
        temp = ptr[i];
		ptr[i] = ptr[j];
        ptr[j] = temp;

	 }

}


void bubble_sort(int *ptr,int size)
{
 int temp;
 for(int i=0; i<= size -1; i++)
  for(int j=i+1; j<= i+1; j++)
  {
     if(ptr[i] > ptr[j] )
	 {
        temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;

	 }
  }

}

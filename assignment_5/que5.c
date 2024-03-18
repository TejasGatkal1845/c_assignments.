#include<stdio.h>

void accept_array(int *ptr,int size);
void print_array(int *ptr,int size);
void max_min_element(int *ptr,int size);

int main(void)

{
 int Size;
 printf("enter the size of array:\n");
 scanf("%d",&Size);
 
 int arr[Size];

 accept_array(arr,Size);
 print_array(arr,Size);
 max_min_element(arr,Size);

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


void max_min_element(int *ptr,int size)
{
 int max=0,min=0;
 for(int i=0; i<= size - 1; i++)
 {
   if(ptr[i]> max)
    max = ptr[i];
 }
  min = max;

 for(int i=0; i<= size - 1; i++) 
 {
  if(ptr[i]< min)
   min = ptr[i];

 }

 printf("maximun element is %d\n",max);

 printf("minimum element is %d\n",min);

}



#include<stdio.h>

void accept_array(int *ptr,int size);
void print_array(int *ptr,int size);
int linear_search(int *ptr,int size,int keyy);

int main(void)

{
 int Size,res,key;
 printf("enter the size of array:\n");
 scanf("%d",&Size);
 
 int arr[Size];

 accept_array(arr,Size);
 print_array(arr,Size);

 printf("enter the key that do you want to find = ");
 scanf("%d",&key);

 res = linear_search(arr,Size,key);
 printf("the key element %d is found at %d index\n",key,res);

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


int linear_search(int *ptr,int size,int keyy)
{ int i;
 for( i=0; i<= size - 1; i++)
 {
   if(keyy == ptr[i])
    return i;
 

 }
 if(keyy != ptr[i])
  return -1;
  
}

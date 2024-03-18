#include<stdio.h>

void marks(int *ptr,int size);
void average_marks(int *ptr,int size);

int main(void)
{
 int arr[5];
 
 marks(arr,5);
 average_marks(arr,5);

 return 0;
}


void marks(int *ptr,int size)
{
 int i=0;
 for(i=0;i<=size -1;i++)
 {
   printf("subject mark [%d]= ",i+1);
   scanf("%d",&ptr[i]);


 }

 
}

void average_marks(int *ptr,int size)
{
 int i=0,avg=0;
 for(i=0;i<=size -1;i++)
 {
   avg = avg + ptr[i];

 }
  printf("total marks = %d \n average marks = %d\n",avg,avg/5);

}

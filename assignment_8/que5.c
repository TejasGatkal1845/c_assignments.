#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
 int roll_no;
 char name[20];
 float marks;

 }stud_t;

void accept_student(stud_t *s1);
void print_student(stud_t *s1);
void sort(stud_t *s1[int size],stud_t *s2[int size]);

//int compare1(const stud_t *s1, const stud_t *s2);

int main(void)
{
 int n;
 printf("enter the size of array\n");
 scanf("%d",&n);

 stud_t arr[n];
 stud_t s;

 for(int i=0; i< n; i++)
   accept_student(&arr[i]);
  
 for(int j=0; j<n; j++)
   print_student(&arr[j]);
 printf("\n");

// qsort(arr, n, sizeof(stud_t), compare1);
    
 sort(&arr[n],&arr[n]);
 
 return 0;
}

void accept_student(stud_t *s1)
 {

   printf("enter the student info : (roll_no, name, marks)\n");
   scanf("%d %s %f",&s1->roll_no,s1->name,&s1->marks);


 }

void print_student(stud_t *s1)

{

  printf("%d %s %f\n",s1->roll_no,s1->name,s1->marks);

}

void sort(stud_t *s1[int size],stud_t *s2[int size])

{

 for(int i=0; i<size; i++)
   for(int j=1; j<size; j++)
      if(s1[i]->roll_no > s2[j]->roll_no)
	  {
            stud_t temp;

			temp = s1[i];
			s1[i] = s2[j];
			s2[j] = temp;

           printf("%d %s %f\n",s2[j]->roll_no,s2[j]->name,s2[j]->marks);

	  } 
      
}

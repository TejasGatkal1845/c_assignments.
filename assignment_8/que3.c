#include<stdio.h>

typedef struct student
{
 int roll_no;
 char name[20];
 float marks;

 }stud_t;

void accept_student(stud_t *s1);
void print_student(stud_t *s1);

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

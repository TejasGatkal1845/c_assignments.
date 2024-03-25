#include<stdio.h>

typedef union result
{
  char grade;
  float percentage;

}result_t;

typedef struct student
{
 int roll_no;
 char name[20];
 int std;
 result_t r;

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

 printf("enter the student info : (roll_no, name, standard)\n");
 scanf("%d %s %d",&s1->roll_no,s1->name,&s1->std);

 if(s1->std <= 4)
  {
    printf("enter grade\n");
    scanf("%*c%c",&s1->r.grade);
  }
 else
  {
    printf("enter the percentage\n");
    scanf("%f",&s1->r.percentage);
  }

}

void print_student(stud_t *s1)

{

 printf("%-4d %-20s %c",s1->roll_no,s1->name,s1->std);

 if(s1->std <= 4)
  printf("%c\n",s1->r.grade);

 else
  printf("%-2f\n",s1->r.percentage);

}

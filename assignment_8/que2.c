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
 stud_t s;

 accept_student(&s);
 print_student(&s);

 return 0;
}

void accept_student(stud_t *s1)
{
 printf("enter the student info : (roll no, name, marks)\n");
 scanf("%d %*c%s %f",&s1->roll_no,s1->name,&s1->marks);

}

void print_student(stud_t *s1)
{
 
 printf("%d %s %f\n",s1->roll_no,s1->name,s1->marks);


}

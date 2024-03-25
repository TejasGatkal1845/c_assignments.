#include<stdio.h>

typedef struct student
{
 int roll_no;
 char name[10];
 unsigned int std : 4;
 unsigned char gender : 1;
 unsigned int age : 5;

 }stud_t;

int main(void)
{
  stud_t s ={{1,tejas,4,m,10},{2,manoj,10,m,16}};

  printf("%d %s %d %c %d",s.roll_no,s.name,s.std,s.gender,s.age);

  

 
 return 0;
}



#include<stdio.h>
#include<string.h>

typedef struct student
{
 int roll_no;
 char name[20];
 float marks;

 }stud_t;

void accept_student(stud_t *s1);
void print_student(stud_t *s1);
void search_info_rollno(stud_t *s1,int Rollno);
void search_info_name(stud_t *s1,char *Name);

int main(void)
{
 int n,rollno;
 char Name[20];
 printf("enter the size of array\n");
 scanf("%d",&n);

 stud_t arr[n];
 stud_t s;

 for(int i=0; i< n; i++)
   accept_student(&arr[i]);
  
 for(int j=0; j<n; j++)
   print_student(&arr[j]);

 printf("enter the rollno you want to search\n");
 scanf("%d",&rollno);
     
 for(int k=0; k< n; k++)
  search_info_rollno(&arr[k],rollno);
 
 printf("enter the name you want to search\n");
 scanf("%s",Name);
 
 for(int l=0; l< n; l++)
   search_info_name(&arr[l],Name);
 
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


void search_info_rollno(stud_t *s1,int Rollno)
{

 int i;
 if(s1->roll_no == Rollno) 
   printf("%d %s %f\n",s1->roll_no,s1->name,s1->marks);
 

}

void search_info_name(stud_t *s1,char *Name)
{

  if(!strcmp(s1->name, Name))
   
     printf("%d %s %f\n",s1->roll_no,s1->name,s1->marks);

}

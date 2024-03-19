#include<stdio.h>
#include<string.h>


void remove_char(char *s1,char *s2,char chh);
void accept_string(char *s);
void print_string(char *s);

int main(void)
{
 char ch;
 char str1[20];
 char str2[20];

 accept_string( str1);
 print_string( str1);

 printf("enter the character to remove:\n");
 scanf("%*c%c",&ch);

 remove_char(str1,str2,ch);

 return 0;
}

void accept_string(char *s)
{
 
 
  printf("enter the string:\n");
  scanf("%[^\n]s",s);
 
}

void print_string(char *s)
{
   printf("%s\n",s);

}

void remove_char(char *s1,char *s2,char chh)
{ 
 for(int i=0; i<= strlen(s1); i++)
  
 {
     if(s1[i] == chh)
       continue;
   printf("%c",s2[i]=s1[i]);

 }
 printf("\n");

}

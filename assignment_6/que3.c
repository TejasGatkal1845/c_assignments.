#include<stdio.h>
#include<string.h>


void remove_char(char *s,char chh);
void accept_string(char *s);
void print_string(char *s);

int main(void)
{
 char ch;
 char str[20];

 accept_string( str);
 print_string( str);

 printf("enter the character to remove:\n");
 scanf("%*c%c",&ch);

 remove_char(str,ch);

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

void remove_char(char *s,char chh)
{ 
 for(int i=0; i<= strlen(s); i++)
 {
   if(s[i] == chh)
   continue;
   printf("%c",s[i]);

 }
 printf("\n");

}

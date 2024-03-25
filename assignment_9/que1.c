#include<stdio.h>
int main(void)
{ 
 char ch;

 FILE *fp = fopen("Tejas.txt","w");

 do
 {
   scanf("%c",&ch);
   fputc(ch, fp);


 }while(ch != '\n');

 fclose(fp);

 printf("data has written\n");

 FILE *fpr = fopen("Tejas.txt","r");

 while((ch = fgetc(fp)) != EOF)
 {
   printf("%c",ch);

 }

 fclose(fpr);

 printf("data has been read sucessfully\n");

 return 0;
}

#include<stdio.h>
#include<string.h>

void copy_file(FILE *fsrc , FILE *fdes);

int main(void)
{ 
 char ch;

 FILE *fsrc = fopen("src.txt","w");

 do
 {
   scanf("%c",&ch);
   fputc(ch, fsrc);


 }while(ch != '\n');

 fseek(fsrc, 0L, SEEK_SET);

 FILE *fdes = fopen("dest.txt","w");

 copy_file(fsrc,fdes);

 printf("data has written\n");

/*
 FILE *fpr = fopen("Tejas.txt","r");

 while((ch = fgetc(fpr)) != EOF)
 {
   printf("%c",ch);

 }
*/
 fclose(fdes);
 fclose(fsrc);
// fclose(fpr);

 printf("data has been read sucessfully\n");

 return 0;
}

void copy_file(FILE *fsrc , FILE *fdes)
{
  char ch;

  while((ch = fgetc(fsrc)) != EOF)
  {
     
    fputc(ch, fdes);


  }


}

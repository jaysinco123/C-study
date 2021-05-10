#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  /* exit() º¯Êý */
 
int main()
{
   char sentence[1000];
   FILE *fptr;
 
   fptr = fopen("runoob.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   
   printf("ÊäÈë×Ö·û´®:\n");
   fgets(sentence, (sizeof sentence / sizeof sentence[0]), stdin);
 
   fprintf(fptr,"%s", sentence);
   fclose(fptr);
 
   return 0;
}
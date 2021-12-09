#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
   char *str;
   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "Program in");
   printf("String = %s,  Address = %u\n", str, str);
   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, " C");
   printf("String = %s,  Address = %u\n", str, str);
   free(str);
   return(0);
}
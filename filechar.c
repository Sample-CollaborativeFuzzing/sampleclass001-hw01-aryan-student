// ***
// *** You MUST modify this file
// ***


#include <stdio.h>
#include <stdlib.h>

#ifdef TEST_PRINT
void print(char * filename) {
  // Print the text in the given file

  FILE * fp = fopen(filename, "r");

  if(fp == NULL)
  {
      return;
  }

  char * buff;

  fscanf(fp, "%s", buff);

  printf("%s\n", buff);

  fclose(fp);

}
#endif

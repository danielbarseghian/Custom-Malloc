#include <stdio.h> 
#include <stdlib.h>

int main (void) {
  char *test = malloc(sizeof(char) * 10);

  test[0] = 'a';
  test[1] = 'b';

  printf("%s\n", test);
}

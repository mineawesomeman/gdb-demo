#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char* js;

void setJs() {
  char tempjs[10];

  strcpy(tempjs, "jjjjj");

  js = tempjs;
}

int main(int argc, char** argv) {
  printf("Lets print some j's!\n");

  setJs();

  printf("%s\n", js);
}

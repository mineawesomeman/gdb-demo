#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char** argv) {
  char* name;

  printf("Lets store and print some j's!\n");

  strcpy(name, "jjjjj");

  printf("Here are my j's %s\n", name);
}

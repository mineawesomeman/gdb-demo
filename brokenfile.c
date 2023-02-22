#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) {
  char* name;
  int j;

  printf("How many times do you want the letter j?   ");
  scanf("%i", &j);

  for (int i = 0; i <= j; i++) {
    *(name+i) = 'j';
  }

  printf("Here are my j's %s\n", name);
}

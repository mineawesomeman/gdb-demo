#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char** argv) {
  int j;
  
  printf("How many j's do you want to print?\n");
  scanf("%i", &j);
  
  for (int i = 0; i <= j; i++) {
    printf("j");
  }
  printf("\n");
}

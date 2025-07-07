#include <stdio.h>

int main() {
  int num = 3;

  switch (num) {
  case 1:
    printf("Number is 1\n");
    break;
  case 2:
    printf("Number is 2\n");
    break;
  case 3:
    printf("Number is 3\n");
    break;
  default:
    printf("Number is not 1, 2, or 3\n");
  }

  return 0;
}
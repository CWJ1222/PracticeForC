#include <stdio.h>

int add(int a, int b) { return a + b; }

int main() {
  int result = add(3, 4);
  printf("The sum is %d\n", result);
  return 0;
}
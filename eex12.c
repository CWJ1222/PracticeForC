#include <stdio.h>

int main() {
  int var = 20; // actual variable declaration.
  int *ip;      // pointer variable

  ip = &var; // store address of var in pointer variable

  printf("Address of var variable: %p\n", (void *)&var);

  // address stored in pointer variable
  printf("Address stored in ip variable: %p\n", (void *)ip);

  // access the value using the pointer
  printf("Value of *ip variable: %d\n", *ip);

  return 0;
}
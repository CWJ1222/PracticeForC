#include <stdio.h>

int main() {
  int a, b, sum;

  printf("첫 번째 정수를 입력하시오: ");
  scanf("%d", &a);

  printf("두번째 정수를 입력하시오: ");
  scanf("%d", &b);
  sum = a + b;
  printf("두수의 합은 %d입니다 \n", sum);

  return 0;
}
#include <stdio.h>

int main() {
  int a, b, result;
  printf("첫 번째 정수를 입력하세요: ");
  scanf("%d", &a);

  printf("두 번째 정수를 입력하세요: ");
  scanf("%d", &b);

  result = a - b;

  printf("두 수의 차는 %d입니다.\n", result);
  return 0;
}
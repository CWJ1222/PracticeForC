#include <stdio.h>

int main() {
  int a, b, c;
  int max;

  printf("첫 번째 정수를 입력하세요: ");
  scanf("%d", &a);

  printf("두 번째 정수를 입력하세요: ");
  scanf("%d", &b);

  printf("세 번째 정수를 입력하세요: ");
  scanf("%d", &c);

  max = a;

  if (b > max) {
    max = b;
  }

  if (c > max) {
    max = c;
  }

  printf("세 수 중 가장 큰 수는 %d입니다.\n", max);

  return 0;
}
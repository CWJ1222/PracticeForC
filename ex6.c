#include <stdio.h>

int main() {
  int a, b;
  int quotient, remainder;

  printf("첫 정수를 입력하라.");
  scanf("%d", &a);

  printf("두번째 정수를 입력하라.");
  scanf("%d", &b);

  if (b == 0) {
    printf("0으로 나눌 수 없습니다.\n");
  } else {
    quotient = a / b;
    remainder = a % b;

    printf("%d ÷ %d의 몫은 %d이고 나머지는 %d입니다.\n", a, b, quotient,
           remainder);
  }
  return 0;
}
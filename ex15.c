#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len, i;
    
    printf("문자열 조작 예제\n");
    printf("================\n");
    
    printf("첫 번째 문자열을 입력하세요: ");
    fgets(str1, sizeof(str1), stdin);
    
    // 개행 문자 제거
    str1[strcspn(str1, "\n")] = 0;
    
    printf("두 번째 문자열을 입력하세요: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    
    // 문자열 길이
    printf("\n첫 번째 문자열 길이: %lu\n", strlen(str1));
    printf("두 번째 문자열 길이: %lu\n", strlen(str2));
    
    // 문자열 비교
    if (strcmp(str1, str2) == 0) {
        printf("두 문자열이 같습니다.\n");
    } else {
        printf("두 문자열이 다릅니다.\n");
    }
    
    // 문자열 연결
    strcat(str1, " + ");
    strcat(str1, str2);
    printf("연결된 문자열: %s\n", str1);
    
    return 0;
}
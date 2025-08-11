#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("알파벳 또는 숫자인지 확인합니다.\n");
    printf("문자를 입력하세요: ");
    scanf("%c", &ch);
    if (isalnum(ch)) {
    printf("%c는 알파벳 또는 숫자입니다\n", ch);
    } else {
    printf("%c는 알파벳 또는 숫자가 아닙니다.\n", ch);
    }

    printf("알파벳인지 확인합니다.\n");
    printf("문자를 입력하세요: ");
    scanf(" %c", &ch);
    if (isalpha(ch)) {
        printf("%c는 알파벳입니다.\n", ch);
    } else {
        printf("%c는 알파벳이 아닙니다.\n", ch);
    }

    printf("숫자인지 확인합니다.\n");
    printf("문자를 입력하세요: ");
    scanf(" %c", &ch);
    if (isdigit(ch)) {
        printf("%c는 숫자입니다.\n", ch);
    } else {
        printf("%c는 숫자가 아닙니다.\n", ch);
    }

    printf("소문자를 대문자로 변환합니다.\n");
    printf("문자를 입력하세요: ");
    scanf(" %c", &ch);
    char upper = toupper(ch);
    printf("%c를 대문자로 변환하면 %c입니다.\n", ch, upper);

    printf("대문자를 소문자로 변환합니다.\n");
    printf("문자를 입력하세요: ");
    scanf(" %c", &ch);
    char lower = tolower(ch);
    printf("%c를 소문자로 변환하면 %c입니다.", ch, lower);

    return 0;
}

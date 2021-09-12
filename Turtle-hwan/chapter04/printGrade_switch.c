#include <stdio.h>

void main() {
    int score;
    printf("점수 입력 : ");
    scanf("%d", &score);

    switch ((score*2)/10) {
        case 20:
        case 19:
            printf("%d는 A+ 입니다.\n", score);
            break;
        case 18:
            printf("%d는 A 입니다.\n", score);
            break;
        case 17:
            printf("%d는 B+ 입니다.\n", score);
            break;
        case 16:
            printf("%d는 B 입니다.\n", score);
            break;
        case 15:
            printf("%d는 C+ 입니다.\n", score);
            break;
        case 14:
            printf("%d는 C 입니다.\n", score);
            break;
        case 13:
            printf("%d는 D+ 입니다.\n", score);
            break;
        case 12:
            printf("%d는 D 입니다.\n", score);
            break;
        default:
            printf("%d는 F 입니다.\n", score);
            break;
    }
}
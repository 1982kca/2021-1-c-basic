#include <stdio.h>


void printBin_dec(int dec) {  //십진수를 이진수로 바꾸어 출력
    int d;
    if (dec >= 0) {
        d = dec;
    }
    else {
        d = -dec;
    }
    int bin[32] = {0,};
    int idx = 31;
    while (d >= 2 && idx != 0) {
        bin[idx] = d % 2;
        idx--;
        d = d / 2;
    }
    bin[idx] = 1;

    if (dec < 0) {  //2진법 음수 처리 -> 2의 보수 표현  // 2의 보수 : 1의 보수 + 1
        for (int i = 31; i >= 0; i--) {  //1의 보수
            if (bin[i] == 1) {
                bin[i] = 0;
            }
            else {
                bin[i] = 1;
            }
        }
        if (bin[31] == 1) { // + 1 처리
            for (int i = 31; i >= 0; i--) {
                if (bin[i] == 1) {
                    bin[i] = 0;
                    continue;
                }
                else {
                    bin[i] = 1;
                    break; 
                }
            }
        }
        else {
            bin[31] = 1;
        }
    }


    //출력 부분 4자리씩 끊어서
    printf("%d를 이진수로 바꾼 결과입니다.\n", dec);
    for (int i = 0; i < 32; i++) {
        printf("%d", bin[i]);
        if (i % 4 == 3) {
            printf(" ");
        }
    }
    printf("\n");
}

void main() {
    //int dec = 0b101111;
    int dec1, dec2;

    printf("연산할 첫 번째 십진수 입력 : ");
    scanf("%d", &dec1);
    printf("연산할 두 번째 십진수 입력 : ");
    scanf("%d", &dec2);

    printBin_dec(dec1);
    printBin_dec(dec2);

    printf("\n[비트 연산]\n");
    printf("\n%d & %d = %d\n", dec1, dec2, dec1 & dec2);
    printBin_dec(dec1 & dec2);

    printf("\n%d | %d = %d\n", dec1, dec2, dec1 | dec2);
    printBin_dec(dec1 | dec2);

    printf("\n%d ^ %d = %d\n", dec1, dec2, dec1 ^ dec2);
    printBin_dec(dec1 ^ dec2);

    printf("\n~%d = %d\n", dec1, ~dec1);
    printBin_dec(~dec1);

    printf("\n%d << 3 = %d\n", dec1, dec1 << 3);
    printBin_dec(dec1 << 3);

    printf("\nsize of int : %ld byte\n", sizeof(dec1));
}

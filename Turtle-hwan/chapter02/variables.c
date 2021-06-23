#include <stdio.h>

void main() {
    int example = 78;
    // 서로 다른 자료형의 변수 3개 이상 선언 및 초기화

    char example_char = 'A';            //문자형 변수 1byte / %c로 출력 / 정수로 출력하려면 %hhd

    float example_float = 2.71828182846;    //4byle 단일 정밀도

    double example_double = 2.71828182846;    //8byte 두배정밀도 실수 표현  /   scanf 시는 double 형은 %lf로 받아야 함.
    
    

    printf("%d\n", example);
    // 앞서 선언한 모든 변수를 한 줄에 하나씩 출력
    printf("문자 출력 : %c   | 정수 출력 : %hhd\n", example_char, example_char);

    printf("float 표현 %%1.16f 출력: %1.16f  | %%f 출력: %f\n", example_float, example_float);
    //float 형식은 double 보다 부정확
    printf("double 표현 %%1.16f 출력: %1.16f  | %%f 출력: %f\n", example_double, example_double);    
    //%f로 출력하면 float이 정확하게 표시할 수 있는 한계만큼 (소수점 아래 6자리 정도) 표현?!
}
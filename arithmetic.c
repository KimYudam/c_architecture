#include <stdio.h>
#include <stdlib.h>

// 덧셈
int add(int a, int b) {
    return a + b;
}

//뺄셈
int subtract(int a, int b) {
    return a - b;
}

//곱셈
int multiply(int a, int b) {
    return a * b;
}

//나눗셈
float divide(int a, int b) {
    return (float)a / b; //실수형으로 출력
}

// main함수
int main() {
    int a, b;

    //두정수를 입력받음
    printf("두 정수를 입력하세요: ");
    scanf_s("%d %d", &a, &b);

    // 사칙연산 수행
    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", subtract(a, b));
    printf("a * b = %d\n", multiply(a, b));
    printf("a / b = %.2lf\n", divide(a, b));

    return 0;
}

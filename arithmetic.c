#include <stdio.h>
#include <stdlib.h>

// ����
int add(int a, int b) {
    return a + b;
}

//����
int subtract(int a, int b) {
    return a - b;
}

//����
int multiply(int a, int b) {
    return a * b;
}

//������
float divide(int a, int b) {
    return (float)a / b; //�Ǽ������� ���
}

// main�Լ�
int main() {
    int a, b;

    //�������� �Է¹���
    printf("�� ������ �Է��ϼ���: ");
    scanf_s("%d %d", &a, &b);

    // ��Ģ���� ����
    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", subtract(a, b));
    printf("a * b = %d\n", multiply(a, b));
    printf("a / b = %.2lf\n", divide(a, b));

    return 0;
}

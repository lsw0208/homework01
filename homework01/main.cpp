#include <stdio.h>

int main() 
{
    int birthYear, birthMonth, birthDay;

    printf("��������� �Է��ϼ���: ");
    scanf_s("%d", &birthYear);

    printf("������� �Է��ϼ���: ");
    scanf_s("%d", &birthMonth);

    printf("������� �Է��ϼ���: ");
    scanf_s("%d", &birthDay);

    // "(����⵵)-(��)+(��)" ���
    int result = birthYear - birthMonth + birthDay;

    // ������ �ڸ��� ���ڰ� 0���� Ȯ��
    int lastDigit = result % 10;

    if (lastDigit == 0)
    {
        printf("Very Good\n");
    }
    else
    {
        printf("SoSo\n");
    }

    return 0;
}

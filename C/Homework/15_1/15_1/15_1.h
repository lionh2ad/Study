#include<stdio.h>
#pragma warning(disable: 4996)

typedef struct person {
	char name[20];
	char company_name[20];
	int company_number;
}Person;

Person ReadPersonInfo(void);

void ShowPersonInfo(Person man);

/*
21.03.01 Quest
"�̸�", "ȸ���", "�����ȣ"�� �Է¹޾� �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

(�̸��� ȸ����� ���� 20�� �����̴�.)

Input :
SungminPark
Wavem
4

Output :
Name : SungminPark
Company : Wavem
Number : 4
*/
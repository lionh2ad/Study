#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

typedef struct person {
	char name[20];
	int hight;
	float weight;
}Person;

Person ReadPersonInfo(void);

void ShowPersonInfo(Person man);
void Temp_person(Person * man, int i, int j);

/*
21.03.03
N���� �̸��� Ű, �����Ը� �Է¹޾� �̸������� �����Ͽ� ����ϰ�,
�����԰� ���ſ� ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�����Դ� �Ҽ������� 1�ڸ����� ����Ѵ�.
�Է��� ����� End�� ������ ���� �Ѵ�.

Input :
Lee 150 35.6
Kim 155 28.9
Sin 148 32.7
Jung 160 41.2
Park 165 38.7
End

Output :
name
Jung 160 41.2
Kim 155 28.9
Lee 150 35.6
Park 165 38.7
Sin 148 32.7

weight
Jung 160 41.2
Park 165 38.7
Lee 150 35.6
Sin 148 32.7
Kim 155 28.9
*/
#include<stdio.h>
#pragma warning(disable: 4996)

typedef struct person {
    char name[20];
    int hight;
 }Person;

Person ReadPersonInfo(void);

void ShowPersonInfo(Person man);
void acending_info(Person * man, int i, int j);
     
/*
21.03.02 Quest
5���� �̸��� Ű�� �Է¹޾� 
Ű�� ���� ���� ����� �̸��� Ű�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
�̸��� 20�� �����̴�.

Input :
Park 175
Lee 180
Choo 185
Son 193
Kim 188

Output :
Park 175
*/
#include<stdio.h>
#pragma warning(disable: 4996)


void main_display() {
	printf("�ڿ��� N�� �Է¹޾� N���� 1���� ���ʴ�� ����ϴ� ���α׷� \n");
	printf("(��, N�� 50������ �ڿ��� �̴�.)");
	printf("�ڿ��� N�� �Է��Ͻÿ�. \n");
}

void count(int num1) {
	if(num1 > 0) {
		printf("%d \n", num1);
		num1--;
		count(num1);
	}
}

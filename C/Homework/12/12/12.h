#include<stdio.h>
#pragma warning(disable: 4996)

void main_display() {
	printf("�ڿ��� N�� �Է¹޴´� \n");
	printf("N�� Ȧ���� ��쿡�� 1���� N������ Ȧ���� \n");
	printf("N�� ¦���� ��쿡�� 2���� N������ ¦���� ����ϴ� ���α׷�\n");
	printf("�ڿ��� N�� �Է� �Ͻÿ�.");
}

void count(const int max_num ,int num2) {
	/*
		if (num1 %2 == 1) {
			if (num1>0) {
				num2 = num2 + 1;
				printf("%d ", num2);
				num1 = num1 - 2;
				num2 = num2 + 1;
				count(num1, num2);
			}
		}
		else if(num1 %2 == 0) {
			if (num1 > 0) {
				num2 = num2 + 2;
				printf("%d ", num2);
				num1 = num1 - 2;
			
				count(num1, num2);
			}
		}
	*/
	if (max_num > 0) {
		if (max_num >= num2) {
			printf("%d ", num2);
			num2 = num2+2;
			count(max_num, num2);
		}
		else {
			return;
		}
	}

}

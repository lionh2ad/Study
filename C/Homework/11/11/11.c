#include"11.h"


void main() {
	int num1 = 0;

	main_display();
	scanf("%d", &num1);
	count(num1);

	return 0;
}

void count(int num1) {
	if (num1 > 0) {
		printf("%d \n", num1);
		num1--;
		count(num1);
	}
}


void main_display() {
	printf("�ڿ��� N�� �Է¹޾� N���� 1���� ���ʴ�� ����ϴ� ���α׷� \n");
	printf("(��, N�� 50������ �ڿ��� �̴�.)");
	printf("�ڿ��� N�� �Է��Ͻÿ�. \n");
}
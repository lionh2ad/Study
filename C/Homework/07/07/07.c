#include"07.h"

void main() {
	int result = 0, n = 0;

	
	printf("���簢���� ���̸� ���� �� ���� ���̸� �Է� �Ͻÿ�. \n");
	scanf_s("%d", &n);
	assert(n < 100);

	printf("���簢���� ���� : %d", square(n));

	return 0;
}

int square(int n) {
	int result = 0;
	result = n * n;

	return result;
}
#include"18.h"

void main() {
	int num1=0, num2=0, count =0, result =0;
	FILE* fp = fopen("d:\\Users\\Result.txt", "w");

	printf("�� ���� ������ �Է� : \n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	for (count=num1;count<=num2;count++) {
		result = result + count;
	}
	printf("result : %d \n", result);

	if (fp == NULL) {
		printf("���� - ����\n");
		return 1;
	}
	fprintf(fp, "%d", result);
	fclose(fp);

	return 0;
}


#include"07.h"

void main() {
	int n = 0, i =0;

	while (1) {
		printf("���簢���� ������� ����ϰ� ���� �迭�� �Ѻ��� ���̸� �Է� �Ͻÿ�. \n");
		scanf_s("%d", &n);
		if (n > 0 && n < 100) {
			break;
		}else {
			printf("100�̸��� ������ �Է� �Ͻÿ�.");
		}
	}
	int** square = malloc(sizeof(int) * n);

	for (i = 0; i < n;i++) {
		square[i] = malloc(sizeof(int) * n);
	}

	intput_number(square,n);
	output_number(square,n);

	for (i = 0;i<n;i++) {
		free(square[i]);
	}

	free(square);

	return 0;
}

void intput_number(int **suare, int n) {
	int i = 0, j = 0, number =0;
	for (i = 0; i < n;i++) {
		for (j = 0; j < n;j++) {
			suare[i][j] = number;
			number++;
		}
	}
}

void output_number(int** suare, int n) {
	int i = 0, j = 0, number = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%-8d ", suare[i][j]);
		}
		printf("\n");
	}
}
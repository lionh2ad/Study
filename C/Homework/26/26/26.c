#include"26.h"

void main() {
	int num1 = 0, num2 = 0, i = 0, j = 0;
	int sum=0, average=0, count =0, score = 0;
	double up_average = 0;
	printf("�׽�Ʈ�� ������ �Է� �Ͻÿ�.");
	scanf("%d", &num1);

	double* ptr1 = (double*)malloc(sizeof(double)*num1);

	for (i=0;i<num1;i++) {
		while (1) {
		printf("�л� ���� �Է� �Ͻÿ�. \n");
		printf("�л��� ���� 1�� 1000 ���̴�. \n");
			scanf("%d", &num2);
			if (1<= num2 && num2 <= 1000) {
				break;
			}
			
		}
		int* ptr2 = (int*)malloc(sizeof(int)*num2);
		for (j=0;j<num2;j++) {
			while (1) {
				printf("%d���� �л� ������ �Է� �Ͻÿ�. \n", j + 1);
				printf("������ 0�� 100 ���̴�. \n");
				scanf("%d", &score);
				if (0<=score && score <= 100) {
					break;
				}
			}
			ptr2[j] = score;
			sum = sum + score;
		}
		average = sum / num2;
		sum = 0;
		
		for (j=0;j<num2;j++) {
			if (ptr2[j]>average) {
				count++;
			}
		}
		up_average = (double)count/num2;
		
		ptr1[i] = up_average*100;
		count = 0;
	}
	printf("Output : \n");
	for (i=0;i<num1;i++) {
		printf("%d������ ���̽� : ", i+1);
		printf("%.3f%% \n", ptr1[i]);
	}

	return 0;
}
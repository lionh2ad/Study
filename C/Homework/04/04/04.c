#include"04.h"

void main() {
	int arr[100] = { 0, }, num=0, while_i=0, i=0;
	int max = -999, min = 999, max_i = 0, min_i = 0;
	Display_main();
	while (while_i<100) {
		scanf_s("%d", &num);
		if (num == 999) {
			break;
		}
		else if (num > -1000 && num < 999) {
			arr[i] = num;
			i++;
		}
		else {
			printf("�߸��� ���� �Է� �ϼ̽��ϴ�.");
			break;
		}
		while_i++;
	}
	for (max_i = 0; max_i < i; max_i++) {
		if (arr[max_i] > max) {
			max = arr[max_i];
		}
		else {
			max = max;
		}		
	}
	for (min_i = 0; min_i < i; min_i++) {
		if (arr[min_i] < min) {
			min = arr[min_i];
		}
		else {
			min = min;
		}
	}
	printf("Output: max_%d, min_%d", max, min);
	return 0;
}

void Display_main() {
	printf("�� �ڸ� ������ ������ �Է� �Ͻÿ�. \n");
	printf("(�Է� �� �� �ִ� �ִ��� ������ 100�� �����̴�.) \n");
	printf("(��, 999�� �Է��� �Ǹ� ���α׷� ����) \n");
}
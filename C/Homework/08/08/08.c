#include"08.h"

int main() {
	float arr[3] = { 0,};
	int i = 0;
	printf("-1000�̻� 1000������ �Ǽ� 3���� �Է� �Ͻÿ�. \n");
	for (i = 0; i < 3; i++) {
		while (1) {
			scanf("%f", &arr[i]);
			if (arr[i] < 1000 && arr[i]>-1000) {
				break;
			}
			else {
				printf("-1000�̻� 1000������ �Ǽ��� �Է��Ͻÿ�. \n");
			}
		}
	}

	buble_sort(arr, 3);

	printf("%.01f \n", ceil(arr[0]));  //�ø�
	printf("%.01f \n", floor(arr[2]));  //����
	printf("%.01f \n", floor(arr[1] + 0.5));  //�ݿø�


	return 0;
}

int buble_sort(int arr[], int n) {
	int i = 0, j = 0, temp = 0;

	for (i = 0; i < n-1;i++) {
		for (j = 0; j < n-1-i;j++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
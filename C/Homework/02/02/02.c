#include "header.h"

int main() {
	int arr[100] = { 0, };
	int i = 0, j=0, num1 = 0;
	while (i<100) {
		printf("%d. ������ �Է� �Ͻÿ�. : ", i+1);
		scanf_s("%d", &num1);
		if (num1 != -1) {
			arr[i] = num1;
			i++;
		}
		else {
			if(i == 1) {
				printf("%d \n", arr[0]);
				break;
			}else if (i == 2) {
				for (j = i - 2; j < i; j++) {
					printf("%d \n", arr[j]);
				}
				break;
			}else if (i > 2) {
				for (j = i - 3; j < i; j++) {
					printf("%d \n", arr[j]);
				}
				break;
			}
		}
	}
	return 0;
}

void Display_main() {
	printf("'-1'���� 100���� ������ �Է� �Ͻÿ�. \n");
	printf("���� '-1'�Է½� �Է½� -1�� ������ ���� 3�� ��� \n");
}
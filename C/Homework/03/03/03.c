#include "03.h"

void main() {
	char arr[5] = {'W', 'A','V', 'E', 'M'}, name = 0;
	int i = 0;
	Display_main();
	scanf_s("%c", &name);
	if (name == 'W') {
		printf("1");
	}else if (name == 'A') {
		printf("2");
	}else if (name == 'V') {
		printf("3");
	}else if (name == 'E') {
		printf("4");
	}else if (name == 'M') {
		printf("5");
	}
	else {
		printf("none");
	}
	return 0;
}

void Display_main() {
	printf("WAVEM �� �� ���ڸ� �Է� �Ͻÿ�. \n");
	printf("���� ���� �ִ� �۾��� ������� ������ none�� ���� \n");
}
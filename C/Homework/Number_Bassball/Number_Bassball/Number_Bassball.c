#include"header_file.h"

void run() {
	int arr[4] = { 0, };
	int i = 0;
	
	printf("�����ϰ� �ִ� 4�ڸ� ���� �Է� �Ͻÿ�.");
	
	for (i=0;i<4;i++) {
		scanf_s("%d", arr[i]);
	}

}

void display() {
	printf("--------------  Number_Bassball_Game  -------------- \n");
	printf("1. ���� ���� ����� 0~9���� ������ ���ڸ� ���� �Է� \n");
	printf("2. ���ߴ� ����� ������ ���ڸ� ���� �Է� \n");
	printf("3-1. ���ڿ� �ڸ��� ��ġ �ϸ� ��Ʈ����ũ(S) \n");
	printf("3-2. ���ڸ� ������ ��(B) \n");
	printf("4. ��� ���ڿ� ��� �ڸ��� ������ ���� ���� \n");
	printf("5. ���ǻ��� : �ߺ��� ���ڴ� �Է� ���� \n");
	printf("---------------------------------------------------- \n");
	printf("\n");
}

void main() {
	display();
	run();

	return 0;
}
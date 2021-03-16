#include"25.h"

void main() {

	show_example();
	Input_main();

	return 0;
}

void show_example() {
	int i = 0,j=0;
	printf("�ﰢ���� ���� n�� ���� m�� �Է� �Ͻÿ�.\n");
	printf("��, �ﰢ���� ũ�� n�� ũ��� 100������ �ڿ��� �̸� \n");
	printf("������ 1���� 3������ �ڿ��� �̴�. \n");
	printf("���Ḧ ���Ѵٸ� n���� 101�� �Է� \n");
	printf("���� m�� 3������ ������ ���� �Ʒ��� ���� ��� �Ѵ�. \n");
	printf("First - 1 : \n");
	show_menu_1(4);
	printf("Second - 2 : \n");
	show_menu_2(4);
	printf("Third - 3 : \n");
	show_menu_3(4);
}

void Input_main() {
	int n = 0, m = 0;
	printf("Input : \n");
	while (1) {
		printf("�ﰢ���� ���� n�� �Է� : ");
		scanf("%d", &n);
		if (n <= 100) {
			printf("���� m�� �Է� : ");
			scanf("%d", &m);
			if (m <= 3 && m>0) {
				select_menu(n, m);
			}else {
				printf("INPUT ERROR! \n");
			}
		}
		else if(n == 101){
			break;
		}else {
			printf("INPUT ERROR! \n");
		}
	}
}

void select_menu(int n, int m) {
	switch (m) {
	case 1:
		show_menu_1(n);
		break;
	case 2:
		show_menu_2(n);
		break;
	case 3:
		show_menu_3(n);
	}
}

void show_menu_1(int n) {
	int i = 0, j=0;
	for (i=0;i<n;i++) {
		for (j=0;j<i+1;j++) {
			printf("*");
		}
		printf("\n");
	}
}

void show_menu_2(int n) {
	int i = 0, j = 0;
	for (i=0;i<n;i++) {
		for (j=n;j>i;j--) {
			printf("*");
		}
		printf("\n");
	}
}

void show_menu_3(int n) {
	int i = 0, j = 0, k=1;
	for (i=0;i<n;i++) {
		for (j=n;j>i;j--) {
			printf(" ");
		}
		for (k=0;k<2*(i+1)-1;k++) {
			printf("*");
		}
		printf("\n");
	}
}
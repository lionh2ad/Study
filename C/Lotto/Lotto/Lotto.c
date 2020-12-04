#include"Lotto.h"
#define COLUMN 5

////3 && 5 ��� ��ó���⸦ ����Ͽ� ROW , COLUMN �� �̿����ּ���.
//int mtm(int* arr) {
//	int i = 0, j = 0, temp = 0;
//
//	for (mtm_i = 0; mtm_i < ROW; mtm_i++)
//	{
//		for (mtm_j = 0; mtm_j < COLUMN; mtm_j++)
//		{
//			if (arr[mtm_j] > arr[mtm_j + 1])
//			{
//				temp = arr[mtm_j];
//				arr[mtm_j] = arr[mtm_j + 1];
//				arr[mtm_j + 1] = temp;
//			}
//		}
//	}
//	//return 0;
//}

// �迭 ���پ� X ���� �� 5��.
void show(int (*arr)[6], int col, int row) {
	int i = 0;
	int j = 0;
	for (j=0;j<row;j++) {
		for (i = 0; i < col; i++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
}


void random(int arr[5][6], int user_data) {
	int i = 0, j=0;
	int mtm_i = 0, mtm_j = 0;
	int count = 0, check = 0, temp = 0;

	for (i=0;i<user_data;i++) {
		j = 0;
		while (j < 6)    //�ζ� ���� 6���� �ݺ� �Ǵ� ����
		{
			arr[i][j] = ((rand() % 45) + 1);   // ���� ���ڰ� ��������� ����
			for (count = 0; count < j; count++)  // ó�� ������� ���� ���� ���� ������� ���� ������ �ݺ�
			{
				check = 0;    // üũ ���� �ʱ�ȭ
				if (arr[i][j] == arr[i][count])  //���ڰ� ������ üũ
				{
					check = 1;  //���� ���ڰ� ���ٸ� ���� �κп� �ٸ� ���ڸ� �ֱ� ���� ��ġ
					break;
				}
			}
			if (check == 0)
			{
				j++;  // ���� ���ڰ� �ƴ϶�� �������� �Ѿ�ڴٴ� ǥ��
			}
		}
		for (mtm_i = 0; mtm_i < COLUMN; mtm_i++)
		{
			for (mtm_j = 0; mtm_j < COLUMN - mtm_i; mtm_j++)
			{
				if (arr[i][mtm_j] > arr[i][mtm_j + 1])
				{
					temp = arr[i][mtm_j];
					arr[i][mtm_j] = arr[i][mtm_j + 1];
					arr[i][mtm_j + 1] = temp;
				}
			}
		}
	}
}

void Write(int arr[5][6], int user_data) {
	int i = 0, j=0;
	int mtm_i = 0, mtm_j = 0;
	int num = 0, count = 0, check = 0, temp = 0;

	printf("�ߺ����� �ʴ� ���� 6���� �Է� �Ͻÿ� ���� �ߺ��� ���� �Է½� �ٽ� �Է� �Ͻÿ�.\n");

	for (i=0;i< user_data;i++) {
		j = 0;
		while (j < 6)    //�ζ� ���� 6���� �ݺ� �Ǵ� ����
		{
			scanf_s("%d", &num);   // ���� �Է� ����
			arr[i][j] = num;    //�ۼ��� ���ڰ� �迭�� ���� �Ǵ� ����
			for (count = 0; count < j; count++)  // ó�� ������� ���� ���� ���� ������� ���� ������ �ݺ�
			{
				check = 0;    // üũ ���� �ʱ�ȭ
				if (arr[i][j] == arr[i][count])  //���ڰ� ������ üũ
				{
					check = 1;  //���� ���ڰ� ���ٸ� ���� �κп� �ٸ� ���ڸ� �ֱ� ���� ��ġ
					break;
				}
			}
			if (check == 0)
			{
				j++;  // ���� ���ڰ� �ƴ϶�� �������� �Ѿ�ڴٴ� ǥ��
			}
		}
		for (mtm_i = 0; mtm_i < COLUMN; mtm_i++)
		{
			for (mtm_j = 0; mtm_j < COLUMN - mtm_i; mtm_j++)
			{
				if (arr[i][mtm_j] > arr[i][mtm_j + 1])
				{
					temp = arr[i][mtm_j];
					arr[i][mtm_j] = arr[i][mtm_j + 1];
					arr[i][mtm_j + 1] = temp;
				}
			}
		}
	}
}

//���忡 ���� A��, B��....������ ��÷ ���� ��Ź�����. ��÷�� 1����� 5�������.
void Check_num(int(*arr)[6], int user_data) {
	int an[5][6] = { 0 };
	//int i_check = 0;
	int count = 0;
	int u_i = 0, u_j = 0,a_i=0, a_j =0;

	random(&an, 1);
	printf("����: \n");
	show(&an, 6, 1);   // ���� Ȯ�ο�

	for (u_i=0;u_i<user_data;u_i++) {  //������ �Է��� ���� �� ��ŭ �ݺ�
		u_j = 0;
		count = 0;
		while (u_j < 6)    // ������ �� ���� ���� �ݺ�
		{
			
			a_j = 0;
			while (a_j<6) {  //���信 ���� ���� �ݺ�
				if (arr[u_i][u_j] == an[0][a_j]) {  //����� ������ ���� ���ٸ� count�� ����
					count++;
					u_j++;
					break;
				}
				else {    //������ ���� �ʴٸ� ��� üũ
					a_j++;
				}
			}
			u_j++;

		}
		printf("%d���� ��÷ ���� : %d \n",u_i+1, count);
		switch (count) {
		case 6:
			printf("1� ��÷ �Ǽ̽��ϴ�. \n \n");
			break;
		case 5:
			printf("2� ��÷ �Ǽ̽��ϴ�. \n \n");
			break;
		case 4:
			printf("3� ��÷ �Ǽ̽��ϴ�. \n \n");
			break;
		case 3:
			printf("4� ��÷ �Ǽ̽��ϴ�. \n \n");
			break;
		case 2:
			printf("5� ��÷ �Ǽ̽��ϴ�. \n \n");
			break;
		default:
			printf("��÷ �Ǽ̽��ϴ�. \n \n");
		}
	}
	
	/*while (i_check < 6) {
		if (an[i_check] == arr[i_check])
		{
			count++;
			i_check++;
		}
		else if (an[i_check] != arr[i_check]) {
			i_check++;
		}
		if (count == 6)
		{
			printf("��÷ �Ǿ����ϴ�. \n");
		}
	}*/
}

// ������ ���� ��� �������� �Ͻð� ������ ���� ���Ͻõ� ������ �迭�� ��Ź�帳�ϴ�.
void Howmany(int * row) {
	int w_row = 0;
	//int w_page = 0;

	printf("������ ���� �Է� �Ͻÿ�.");
	scanf_s("%d", &w_row);
	/*printf("������ ���� �Է� �Ͻÿ�.(�ּ� 1��)");
	scanf_s("%d", &w_page);
	*page = w_page;*/
	*row = w_row;
}


void run() {
	int ch = 0;
	int row = 1;
	//int i_row = 0;
	int page = 1,  i_page = 0;
	int lotto[5][6]={0};
	srand(time(NULL));
	
	Howmany(&row);

	for (i_page = 0; i_page < page; i_page++) {
		//for (i_row=0;i_row<row;i_row++) {
			printf("%d�� �ڵ����� ���� ���� ���� �� �� ���Ͻÿ�.\n", i_page+1);
			printf("1. �ڵ�  2. ���� \n");
			scanf_s("%d", &ch);
			if (ch == 1)
			{
				random(&lotto, row);
				show(lotto, 6, row);
				Check_num(&lotto, row);
			}
			else if (ch == 2) {
				Write(&lotto, row);
				show(lotto, 6, row);
				Check_num(&lotto, row);
			}
		//}
	}
	return 0;
}

void display() {
	printf("-----�ζ� �����-----\n");
	printf("A [ ][ ][ ][ ][ ][ ]\n");
	printf("B [ ][ ][ ][ ][ ][ ]\n");
	printf("C [ ][ ][ ][ ][ ][ ]\n");
	printf("D [ ][ ][ ][ ][ ][ ]\n");
	printf("E [ ][ ][ ][ ][ ][ ]\n");
	printf(" - ���� ���� 2���� �迭�� �����Ѵ�.\n");
	printf("  ���!!\n");
	printf("  1)���� : ������ �ּ� 1���ӿ��� �ִ� 5������ �����ϴ�.\n");
	printf("	- ���� ���: ����(������Է�), �ڵ�( �����ϰ� ���� 1~45)\n");
	printf("	- ���� ���ӿ��� �ߺ��� ���ڸ� ������� �ʴ´�.\n");
}


int main(void)
{
	display(); //�ʱ� ȭ��
	run(); //�����Լ�	
}
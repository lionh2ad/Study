#include"Lotto.h"
#define COLUMN 5

int mtm(int ***lotto, int a_i, int user_page) {
	int i = 0;
	int mtm_i = 0,temp = 0;
	int switch_a[6] = { 0 };

	for (i = 0; i < 6; i++) {
		switch_a[i] = lotto[user_page][a_i][i];
	}
	for (mtm_i = 0; mtm_i < COLUMN; mtm_i++)
	{
		for (i = 0; i < COLUMN - mtm_i; i++)
		{
			if (switch_a[i] > switch_a[i+1])
			{
				temp = switch_a[i];
				switch_a[i] = switch_a[i+1];
				switch_a[i+1] = temp;
			}
		}
	}
	for (i = 0; i < 6; i++) {
		lotto[user_page][a_i][i] = switch_a[i];
	}
	return lotto;
}

// �迭 ���پ� X ���� �� 5��.
void show(int ***lotto, int col, int row, int user_page) {
	int i = 0;
	int j = 0;
	for (j=0;j<row;j++) {
		for (i = 0; i < col; i++)
		{
			printf("%d ", lotto[user_page][j][i]);
		}
		printf("\n");
	}
	printf("\n");
}


void random(int ***lotto, int user_row, int user_page) {
	int i = 0, j=0;
	int mtm_i = 0, mtm_j = 0;
	int count = 0, check = 0, temp = 0;

	for (i=0;i<user_row;i++) {
		j = 0;
		while (j < 6)    //�ζ� ���� 6���� �ݺ� �Ǵ� ����
		{
			lotto[user_page][i][j] = ((rand() % 45) + 1);   // ���� ���ڰ� ��������� ����
			for (count = 0; count < j; count++)  // ó�� ������� ���� ���� ���� ������� ���� ������ �ݺ�
			{
				check = 0;    // üũ ���� �ʱ�ȭ
				if (lotto[user_page][i][j] == lotto[user_page][i][count])  //���ڰ� ������ üũ
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
		mtm(lotto, i, user_page);
	}
}

void Write(int*** lotto, int user_row, int user_page) {
	int i = 0, j=0;
	int mtm_i = 0, mtm_j = 0;
	int num = 0, count = 0, check = 0, temp = 0;

	printf("�ߺ����� �ʴ� ���� 6���� �Է� �Ͻÿ� ���� �ߺ��� ���� �Է½� �ٽ� �Է� �Ͻÿ�.\n");

	for (i=0;i< user_row;i++) {
		j = 0;
		while (j < 6)    //�ζ� ���� 6���� �ݺ� �Ǵ� ����
		{
			scanf_s("%d", &num);   // ���� �Է� ����
			lotto[user_page][i][j] = num;    //�ۼ��� ���ڰ� �迭�� ���� �Ǵ� ����
			for (count = 0; count < j; count++)  // ó�� ������� ���� ���� ���� ������� ���� ������ �ݺ�
			{
				check = 0;    // üũ ���� �ʱ�ȭ
				if (lotto[user_page][i][j] == lotto[user_page][i][count])  //���ڰ� ������ üũ
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
		mtm(lotto, i, user_page);
	}
}

void Check_num(int ***arr, int user_row, int ***an, int user_page) {
	int row = 1, col = 6;
	int u_i = 0, u_j = 0, a_i = 0, a_j = 0;
	int count = 0, i=0, check_row =0, check_page =0;

	int*** check_count = (int***)malloc(sizeof(int**) * 1);
	for (check_page=0; check_page<1; check_page++) {
		check_count[check_page] = (int**)malloc(sizeof(int*) * user_row);
		for (check_row =0; check_row <user_row; check_row++)
		{
			check_count[check_page][check_row] = (int*)malloc(sizeof(int) * col);
		}
	}

	for (u_i=0;u_i< user_row;u_i++) {  //������ �Է��� ���� �� ��ŭ �ݺ�
		u_j = 0;
		count = 0;
		while (u_j < 6)    // ������ �� ���� ���� �ݺ�
		{			
			a_j = 0;
			while (a_j<6) {  //���信 ���� ���� �ݺ�
				if (arr[user_page][u_i][u_j] == an[0][0][a_j]) {  //����� ������ ���� ���ٸ� count�� ����
					check_count[0][u_i][count] =an[0][0][a_j];
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
		printf("%d���� ��÷ ���� : %d ",u_i+1, count);
		printf("[��÷ ���� : ");
		for (i = 0; i < count; i++) {
			printf("\'%d\'", check_count[0][u_i][i]);
		}
		printf("] \n");
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
}

void Howmany_pages(int * page) {
	int w_page = 0;

	printf("������ ���� �Է� �Ͻÿ�.(�ּ� 1��)");
	scanf_s("%d", &w_page);
	*page = w_page;
}

void Howmany_row(int * row) {
	int w_row = 0;

	printf("������ ���� �Է� �Ͻÿ�.");
	scanf_s("%d", &w_row);
	*row = w_row;
}

void run() {
	int ch = 0;
	int row = 1,i_row =0, an_row=0, col = 6;
	int page = 1,  i_page = 0, an_page=0;
	
	srand(time(NULL));
	int*** an = (int***)malloc(sizeof(int**) * 1);
	for (an_page =0;an_page<1;an_page++) {
		an[an_page] = (int**)malloc(sizeof(int*) * 1);
		for (an_row = 0; an_row < 1; an_row++) {
			an[an_page][an_row] = (int*)malloc(sizeof(int) * col);
		}
	}
	random(an, 1, 0);

	Howmany_pages(&page);
	int*** lotto = (int***)malloc(sizeof(int**) * page);
	for (i_page = 0; i_page < page; i_page++) {
			printf("%d�� ", i_page + 1);
			Howmany_row(&row);
			lotto[i_page] = (int**)malloc(sizeof(int*) * row);
			for (i_row = 0;i_row<row;i_row++) {
				lotto[i_page][i_row] = (int*)malloc(sizeof(int) * col);
			}

			printf("%d�� �ڵ����� ���� ���� ���� �� �� ���Ͻÿ�.\n", i_page + 1);
			printf("1. �ڵ�  2. ���� \n");
			scanf_s("%d", &ch);
			if (ch == 1)
			{
				random(lotto, row, i_page);
				show(lotto, 6, row, i_page);
				Check_num(lotto, row, an, i_page);
			}
			else if (ch == 2) {
				Write(lotto, row, i_page);
				show(lotto, 6, row, i_page);
				Check_num(lotto, row, an, i_page);
			}			
	}	

	for (page; page == 0; page--)
	{
		for (row; row == 0; row--)
			free(lotto[page][row]);
		free(lotto[page]);
	}
	free(lotto);

	printf("����: \n");
	show(an, col, 1, 0);   // ���� Ȯ�ο�

	for (page; page == 0; page--)
	{
		for (row; row == 0; row--)
			free(an[page][row]);
		free(an[page]);
	}
	free(an);

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
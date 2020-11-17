#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mtm(int *arr) {
	int i = 0, j = 0, temp = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}

int show(int *arr) {
	int i = 0;
	for (i=0;i<6;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


random(int* arr) {
	int i = 0;
	int count = 0;
	int check = 0;

	while (i < 6)    //�ζ� ���� 6���� �ݺ� �Ǵ� ����
	{
		arr[i] = ((rand() % 45) + 1);   // ���� ���ڰ� ��������� ����
		for (count = 0; count < i; count++)  // ó�� ������� ���� ���� ���� ������� ���� ������ �ݺ�
		{
			check = 0;    // üũ ���� �ʱ�ȭ
			if (arr[i] == arr[count])  //���ڰ� ������ üũ
			{
				check = 1;  //���� ���ڰ� ���ٸ� ���� �κп� �ٸ� ���ڸ� �ֱ� ���� ��ġ
				break;
			}
		}
		if (check == 0)
		{
			i++;  // ���� ���ڰ� �ƴ϶�� �������� �Ѿ�ڴٴ� ǥ��
		}
	}
}

int Write(int* arr) {
	int i = 0;
	int num = 0;
	int count = 0;
	int check = 0;

	printf("�ߺ����� �ʴ� ���� 6���� �Է� �Ͻÿ� ���� �ߺ��� ���� �Է½� �ٽ� �Է� �Ͻÿ�.\n");

	while (i < 6)    //�ζ� ���� 6���� �ݺ� �Ǵ� ����
	{
		scanf_s("%d", &num);   // ���� �Է� ����
		arr[i] = num;    //�ۼ��� ���ڰ� �迭�� ���� �Ǵ� ����
		for (count = 0; count < i; count++)  // ó�� ������� ���� ���� ���� ������� ���� ������ �ݺ�
		{
			check = 0;    // üũ ���� �ʱ�ȭ
			if (arr[i] == arr[count])  //���ڰ� ������ üũ
			{
				check = 1;  //���� ���ڰ� ���ٸ� ���� �κп� �ٸ� ���ڸ� �ֱ� ���� ��ġ
				break;
			}
		}
		if (check == 0)
		{
			i++;  // ���� ���ڰ� �ƴ϶�� �������� �Ѿ�ڴٴ� ǥ��
		}
	}
}

void Check_num(int* arr) {
	int an[6] = { 0 };
	int i_check = 0;
	int count = 0;

	random(&an);

	//printf("����: \n");
	//show(&an);   // ���� Ȯ�ο�

	while (i_check < 6) {
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
	}
}


void Howmany(int * row, int * page) {
	int w_row = 0;
	int w_page = 0;
	printf("������ ���� �Է� �Ͻÿ�.");
	scanf_s("%d", &w_row);
	printf("������ ���� �Է� �Ͻÿ�.(�ּ� 1��)");
	scanf_s("%d", &w_page);
	*row = w_row;
	*page = w_page;
}


void run() {
	int ch = 0;
	int row = 1;
	int page = 1;
	int i_row = 0;
	int i_page = 0;
	int lotto[5][6]={0};
	srand(time(NULL));
	
	Howmany(&row, &page);

	for (i_page = 0; i_page < page; i_page++) {
		for (i_row=0;i_row<row;i_row++) {
			printf("%d�� %d�� �ڵ����� ���� ���� ���� �� �� ���Ͻÿ�.\n", i_page+1, i_row+1);
			printf("1. �ڵ�  2. ���� \n");
			scanf_s("%d", &ch);

			if (ch == 1)
			{
				random(&lotto);
				mtm(&lotto);
				show(&lotto);
				Check_num(&lotto);
			}
			else if (ch == 2) {
				Write(&lotto);
				mtm(&lotto);
				show(&lotto);

				Check_num(&lotto);
			}
		}
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
	printf("  1)���� : ������ �ּ� 1���̿��� �ִ� 5������ �����ϴ�.\n");
	printf("	- ���� ���: ����(������Է�), �ڵ�( �����ϰ� ���� 1~45)\n");
	printf("	- ���� ���ӿ��� �ߺ��� ���ڸ� ������� �ʴ´�.\n");
}


int main(void)
{
	display(); //�ʱ� ȭ��
	run(); //�����Լ�	
}
#include"15.h"

void main() {
	char arr_name[20] = { 0, }, arr_company = { 0, };
	int number_company = 0;
	int count_name = 0, count_company = 0, count_number_company = 0;

	display_main();
	Input_info(arr_name, arr_company, number_company);
	scanf("%d", &number_company);
	count_name = count_arr_char(arr_name);
	count_company = count_arr_char(arr_company);
	Output_info_char(arr_name, count_name);
	Output_info_char(arr_company, count_company);
	printf("%d ", number_company);

	return 0;
}

void display_main() {
	printf("\"�̸�\", \"ȸ���\", \"�����ȣ\"�� �Է� �޾� ����ϴ� ���α׷� \n");
	printf("��, �̸��� ȸ����� ���� 20�� �����̴�. \n");
}

int Input_info(char * arr_name, char * arr_company, int number_company) {
	printf("Input : \n");
	printf("�̸�: ");
	scanf("%s", &arr_name);
	printf("ȸ���: ");
	scanf("%s", &arr_company);
	printf("�����ȣ: ");
}

int count_arr_char(char * arr) {
	int num1 = 0;
	while (arr[num1] != '\0')
		num1++;
	return num1;
}

void Output_info_char(char * arr, int count) {
	int i = 0;
	printf("Output : \n");
	for (i=0;i<count;i++) {
		printf("%c", arr[i]);
	}
}

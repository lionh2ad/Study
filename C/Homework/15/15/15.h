#include<stdio.h>
#pragma warning(disable: 4996)

void display_main();
int Input_info(char* arr_name, char* arr_company, int number_company);
void Output_info_char(char* arr);
int count_arr_char(char* arr);
void Output_info_char(char* arr, int count);
void Output_info_int(int* arr, int count);

/*
21.03.01 Quest
"�̸�", "ȸ���", "�����ȣ"�� �Է¹޾� �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

(�̸��� ȸ����� ���� 20�� �����̴�.)

Input :
SungminPark
Wavem
4

Output :
Name : SungminPark
Company : Wavem
Number : 4

*/
#include<stdio.h>
#pragma warning(disable:4996)

void run();
void show_main();
int input_student_number(int st_n);
double input_score_aver();
void up_number(double st[], int st_n);
void show_number(double st[], int st_n);

/*
21.03.23
Quset :
ù° �ٿ� ���� n(2��n��100)�� �Է¹ް�
���� �ٺ��� n�� �л��� 3���� ������ �Է¹޾�
����� ���Ͽ� ������ ���� ������ ����Ͻÿ�.
��, ����� �Ҽ� ��° �ڸ����� �ݿø��Ͽ�
�Ҽ� ù° �ڸ����� ����Ͻÿ�.

* ǥ������¹������ �ۼ��ϼ���.

Input :
5
85 48 68
73 55 89
90 73 86
63 90 100
95 76 23
Output :
84.3
83.0
72.3
67.0
64.7
*/
#include<stdio.h>
#pragma warning(disable:4996)

void run();
void show_main();
int input_student_number(int st_n);
float input_score_aver();
void up_number(float st[], int st_n);
void show_number(float st[], int st_n);

/*
21.03.23
Quset :
첫째 줄에 정수 n(2≤n≤100)을 입력받고
다음 줄부터 n명 학생의 3과목 점수를 입력받아
평균을 구하여 점수가 높은 순으로 출력하시오.
단, 평균은 소수 둘째 자리에서 반올림하여
소수 첫째 자리까지 출력하시오.

* 표준입출력방식으로 작성하세요.

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
#include<stdio.h>
#pragma warning(disable:4996)

void show_example();
void Input_main();
void select_menu(int n, int m);
void show_menu_1(int n);
void show_menu_2(int n);
void show_menu_3(int n);

/*
 Quest 21.03.16
�ﰢ���� ���� n�� ���� m�� �Է� ���� �� 
������ ���� �ﰢ�� ���·� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

   *
   First - 1
   *
   **
   ***
   ****

   Second - 2
   ****
   ***
   **
   *

   Third - 3
      *
     ***
    *****
   *******

   * �Է� ����
   �ﰢ���� ũ�� n(n�� ������ 100 ������ �ڿ���)�� 
   ���� m(m�� 1���� 3������ �ڿ���)�� �Է¹޴´�.

   * ��� ����
   ������ ����� 3���� ������ �Է¿��� ���� 
   ���� n�� ���� m�� ���缭 ����Ѵ�.
   �Էµ� �����Ͱ� �־��� ������ ����� 
   "INPUT ERROR!"�� ����Ѵ�.

   //ex 1
   Input :
   3 2

   Output :
   ***
   **
   *

   // ex 2
   Input :
   4 3

   Output :
      *
     ***
    *****
   *******

   // ex 3
   Input :
   200 3

   Output :
   INPUT ERROR!
*/
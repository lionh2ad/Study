#include<iostream>
#include<cstdlib>

class Solution {
private:
	int i = 0;
	int j = 0;
	int strike = 0;
	int ball = 0;
	int arrAnswer[3] = {0,};

public:
	Solution() {
		for (i=0;i<3;i++) {
			arrAnswer[i] = rand() % 10;
		}
	}
	void run();
	void inputNumber(int arrUser[]);
	void checkNumber(int arrUser[]);
	void showResult();
};
//�Է½� ���� ó���� ������ 5�� �߰�
/*
Day : 21.05.18
* Quest
1. Ŭ������ ���� �Ǹ� ������ �����Ѵ�.
2. ����ڿ��� ���� ������ �Է� �޴´�.
3. ����� ���ڸ��� �����͸� ���Ѵ�.
4. ������ ��� ��� ������ ��� ����� �Է� �� ���
5. ���� ��� �� ���� �Է� Ƚ�� ���

* ����
0~9���� ���ڸ��� ���� �������� ��ġ�Ѵ�.
�ߺ� ����
ex) answer = 012

���̽��� ��Ģ :
* �ڸ��� ���ڰ� �´� �ٸ� ��Ʈ����ũ
* �ڸ��� �ٸ����� ���ڰ� �ٸ��ٸ� ��
* ������ ���ٸ� �ƿ�

ex)
ANSWER : 123

����� : 456
������ : OUT

����� : 126
������ : 2 STRIKE

����� : 356
������ : 1 BALL

����� : 136
������ : 1 STRKIE 1BALL

�����: 123
������: 3 STRIKE
*/
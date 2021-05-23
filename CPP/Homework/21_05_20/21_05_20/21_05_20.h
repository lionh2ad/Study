#include<iostream>
#include<cstdlib>
#include<string>
#include<stdlib.h>
#include<sstream>

class Solution {
private:
	int i;
	int j;
	int strike;
	int ball;
	int count;
	std::string arrAnswer;
public:
	Solution();
	void run();
	void inputNumber(int arrUser[]);
	void compareNumber(int arrUser[]);
	void showResult();
	~Solution();
};

/*
Day : 21.05.18
* Quest
1. Ŭ������ ���� �Ǹ� ������ �����Ѵ�.
(int�� �ƴ� string����)
2. ����ڿ��� ���� ������ �Է� �޴´�.
3. ����� ���ڸ��� �����͸� ���Ѵ�.
4. ������ ��� ��� ������ ��� ����� �Է� �� ���
5. ���� ��� �� ���� �Է� Ƚ�� ���
(��! �߰��ϱ�)
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
#include<iostream>
using std::cin; using std::cout;
using std::endl;
class Solution {
private:
	int count;
	int num;
	int result;
	int fn_numberOfSteps(int num);
	void fn_show();
public:
	void fn_run();
};

/*
21.03.30
���� �ƴ� ������ �־����� �ܰ踦 �����Ͽ� 
0���� ���߰� �̸� ��ȯ�մϴ�.
���� ���ڰ� ¦���̸� 2�� ��������ϰ� 
�׷��� ������ 1�� �����մϴ�.
Input :
	num = 14
	Ouput : 6
	���� :
	1) 14 / 2 = 7
	2) 7 - 1 = 6
	3) 6 / 2 = 3
	4) 3 - 1 = 2
	5) 2 / 2 = 1
	6) 1 - 1 = 0
*/
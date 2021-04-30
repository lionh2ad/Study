#include<iostream>
using std::cin; using std::cout;
using std::endl;


class cl_solution{
private:
    int nums[5];
    int result;
    int length;
    int count;
    int number;
    int sumOddLengthSubarrays(int* arr);
public:
    void cl_run();
    void input_nums();
    void cl_show();
};
/*
Day : 21.04.02
@ Quest :
�迭�� Ȧ�� ��° ���� ���Ͽ� ��ȯ �ϱ�
@ Input :
arr = [1,4,2,5,3]
@ Output :
58
@ Explanation :
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
�� �� : 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58
*/
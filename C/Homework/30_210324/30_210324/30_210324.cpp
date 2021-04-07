#include"30_210324.h"

int Solution::get_count() {
	return count;
}

void Solution::set_count(int count) {
	this->count = count;
}

int* Solution::fn_running_sum(int* nums) {
	int i = 0;
	for (i = 1;i<count;i++) {
		nums[i] = nums[i] + nums[i - 1];
	}
	return nums;
}

void Solution::Show_nums(int* nums) {
	int i = 0;
	for (i=0;i<count;i++) {
		cout << "nums: " << nums[i] << endl;
	}
}

int main(void) {
	int i = 0, count =0;
	int* nums = new int[count];
	Solution* nums_S=new Solution();

	cout << "�Է��ϰ� ���� �ڸ����� �Է� �Ͻÿ�." << endl;
	cin >> count;

	nums_S->set_count(count);

	cout <<count<< "�ڸ� ���� �Է� �Ͻÿ�." << endl;
	for (i=0;i<count;i++) {
		cin >> nums[i];
	}
	nums=nums_S->fn_running_sum(nums);
	nums_S->Show_nums(nums);
	

	delete nums_S;
	//delete[] nums;
	return 0;
}
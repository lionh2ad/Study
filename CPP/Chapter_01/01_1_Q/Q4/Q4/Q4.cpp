#include<iostream>

int main(void)
{
	int base_payment = 50, selling_item_number=0;
	double selling_per = 0.12, result = 0;


	while (1) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> selling_item_number;

		if (selling_item_number == -1) {
			break;
		}
		else {
			result = base_payment + selling_item_number * selling_per;
			std::cout << "�̹� �� �޿�: " <<result<< "����" << std::endl;
		}
	}
	std::cout<<"���α׷��� �����մϴ�."<<std::endl;
	return 0;
}
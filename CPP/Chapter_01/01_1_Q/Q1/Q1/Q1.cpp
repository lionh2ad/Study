#include<iostream>

int main(void)
{
	int val1 = 0, val2 = 0, val3 = 0, val4 = 0, val5 = 0;

	std::cout << "1��° ���� �Է�: ";
	std::cin >> val1;

	std::cout << "2��° ���� �Է�: ";
	std::cin >> val2; 
	
	std::cout << "3��° ���� �Է�: ";
	std::cin >> val3;

	std::cout << "4��° ���� �Է�: ";
	std::cin >> val4;

	std::cout << "5��° ���� �Է�: ";
	std::cin >> val5;

	int result = val1 + val2 + val3 + val4 + val5;
	std::cout << "�հ�: " << result << std::endl;
	return 0;
}
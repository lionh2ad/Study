#include<iostream>

int main(void)
{
	char name[100];
	int phone_number=0;

	std::cout << "�̸��� ��ȭ��ȣ�� �Է� �Ͻÿ�.";
	std::cin >> name >> phone_number;
	
	std::cout << "�̸�: " << name << std::endl << "��ȭ��ȣ: " << phone_number << std::endl;

	return 0;
}
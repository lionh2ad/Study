#include"31.h"

int main(int argc, char* argv[]) {
	run();
	return 0;
}

void run() {
	int num1 = 0, num2 = 1, select =0;
	float fl_num_one = 0.0, fl_num_two = 0.0;
	std::string st_one(" ");
	std::string st_two = " ";
	std::cout << "1. ���� 2. �Ǽ� 3. ���ڿ�" << std::endl;
	std::cout << "���ϰ��� �ϴ� �Է� ���� Ÿ���� ���ڷ� �Է� �Ͻÿ�." << std::endl;
	std::cin >> select;
	switch (select){
	case 1:
		std::cout << "ù��° ������ �Է� �Ͻÿ�." << std::endl;
		std::cin >> num1;
		std::cout << "�ι�° ������ �Է� �Ͻÿ�." << std::endl;
		std::cin >> num2;
		std::cout<<add(num1,num2)<<std::endl;
		break;
	case 2:
		std::cout << "ù��° �Ǽ��� �Է� �Ͻÿ�." << std::endl;
		std::cin >> fl_num_one;
		std::cout << "�ι�° �Ǽ��� �Է� �Ͻÿ�." << std::endl;
		std::cin >> fl_num_two;
		std::cout<<add(fl_num_one, fl_num_two)<<std::endl;
		break;
	case 3:
		std::cout << "ù��° ���ڸ� �Է� �Ͻÿ�." << std::endl;
		std::cin >> st_one;
		std::cout << "�ι�° ���ڸ� �Է� �Ͻÿ�." << std::endl;
		std::cin >> st_two;
		std::cout << add(st_one, st_two) << std::endl;
	default:
		break;
	}
}

int add(int a, int b) {
	int result = 0;
	result = a + b;
	return result;
}

float add(float a, float b) {
	float result = 0;
	result = a + b;
	return result;
}

std::string add(std::string a, std::string b) {
	std::string result(" ");
	result = a + b;
	return result;
}
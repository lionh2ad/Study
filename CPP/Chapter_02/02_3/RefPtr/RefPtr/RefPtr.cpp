#include<iostream>
using namespace std;

int main(void)
{
	int num = 12;
	int* ptr = &num;		//ptr������ ����
	int** dptr = &ptr;		//dptr������ ����

	int& ref = num;
	int* (&pref) = ptr;		//pref������ ����
	int** (&dpref) = dptr;	//dpref������ ����

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
	return 0;
}
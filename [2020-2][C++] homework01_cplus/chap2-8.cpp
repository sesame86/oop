#include <iostream>
#include<cstring>
using namespace std;

int main2()
{
	char name[100];
	char long_name[100];
	int i, length = 0;
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요" << endl;

	for (i = 1; i < 6; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;
		if (length < strlen(name)) {
			length = strlen(name);
			strcpy_s(long_name, name);
		}
	}
	cout << "가장 긴 이름은" << long_name << endl;

	return 0;
}
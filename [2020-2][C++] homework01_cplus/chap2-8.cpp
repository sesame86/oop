#include <iostream>
#include<cstring>
using namespace std;

int main2()
{
	char name[100];
	char long_name[100];
	int i, length = 0;
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���" << endl;

	for (i = 1; i < 6; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;
		if (length < strlen(name)) {
			length = strlen(name);
			strcpy_s(long_name, name);
		}
	}
	cout << "���� �� �̸���" << long_name << endl;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main46()
{
	string str;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)";
	while (true) {
		cout << endl << ">>";
		getline(cin, str, '\n');
		if (str == "exit")
			break;
		int len = str.length();
		for (int i = len; i >= 0; i--) {
			cout << str[i];
		}
	}
	return 0;
}
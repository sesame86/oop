#include <iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, str, "\n");
		if (str == "exit")
			break;
		int len = str.length();
		for (int i = len; i >= 0; i--) {
			cout << a[i];
		}
		cout << str << endl;
	}
	return 0;
}
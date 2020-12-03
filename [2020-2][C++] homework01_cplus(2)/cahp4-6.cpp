#include <iostream>
#include <string>
using namespace std;

int main46()
{
	string str;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";
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
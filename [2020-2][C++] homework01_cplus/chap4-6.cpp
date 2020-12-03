#include <iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
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
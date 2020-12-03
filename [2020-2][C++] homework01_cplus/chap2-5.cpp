#include <iostream>
using namespace std;

/*<ENTER>키가 입력될 때까지 문자들을 읽고,
입력된 문자 'x'의 개수를 화면에 출력*/
int main1()
{
    char a[100];
    char search = 'x';
    int i, count = 0;

    cout << "문자들을 입력하라(100개 미만)." << endl;
    cin.getline(a, 100, '\n');
    for (i = 0; i < 100; i++) {
        if (search == a[i])
            count++;
    }
    cout << "x의 개수는 " << count << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};
Person::Person() {
	name = " "; tel = "000-0000-0000";
}
void Person::set(string name, string tel) {
    this->name = name; this->tel = tel;
}
int main49()
{
    cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
    Person person[3];
    string name_, tel_;
    for (int i = 0; i < 3; ++i) {
        cout << "��� " << i + 1 << ">> ";
        cin >> name_ >> tel_;
        person[i].set(name_, tel_);
    }
    cout << "��� ����� �̸��� ";
    for (int i = 0; i < 3; ++i)
        cout << person[i].getName() << ' ';
    cout << endl << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
    cin >> name_;
    for (int i = 0; i < 3; ++i) {
        if (name_ == person[i].getName())
            cout << "��ȭ ��ȣ�� " << person[i].getTel() << endl;
    }
	return 0;
}
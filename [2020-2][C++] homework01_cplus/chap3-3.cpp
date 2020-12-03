#include <iostream>
using namespace std;

class Account {
	string name;
	int id, bank_balance;
public:
	Account();
	Account(string n, int i, int b);
	int deposit(int money);
	string getOwner();
	int withdraw(int money);
	int inquiry();
};
Account::Account() {
	name = " "; id = 0; bank_balance = 0;
}
Account::Account(string n, int i, int b) {
	name = n;
	id = i;
	bank_balance = b;
}
int Account::deposit(int money) {
	bank_balance += money;
	return bank_balance;
}
string Account::getOwner() {
	return name;
}
int Account::withdraw(int money) {
	bank_balance -= money;
	return money;
}
int Account::inquiry() {
	return bank_balance;
}

int main6()
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	return 0;
}
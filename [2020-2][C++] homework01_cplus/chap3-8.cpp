#include <iostream>
#include <string>
#define TRUE 1
#define FALSE 0
using namespace std;

class Integer {
	int n;
public:
	Integer();
	Integer(int n);
	Integer(string n);
	void set(int n);
	int get();
	int isEven();
};
inline Integer::Integer(int n) {
	this->n = n;
}
inline Integer::Integer(string n) {
	this->n = stoi(n);
}
inline void Integer::set(int n) {
	this->n = n;
}
inline int Integer::get() {
	return n;
}
inline int Integer::isEven() {
	if (n % 2 == 0)
		return TRUE;
	else
		return FALSE;
}
int main8()
{
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();

	return 0;
}
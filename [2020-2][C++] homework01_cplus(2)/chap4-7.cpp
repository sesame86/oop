#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	~Circle();
	void setRadius(int radius);
	double getArea();
};
Circle::Circle() {
	radius = 0;
}
Circle::~Circle() {
}
void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}
int main()
{
	Circle *circle_ = new Circle[3];
	int radius_;
	for (int i = 0; i < 3; i++) {
		cout << "��" << i + 1 << "�� ������ >> ";
		cin >> radius_;
		circle_[i].setRadius(radius_);
	}
	int count = 0;
	for (int i = 0; i < 3; i++) {
		if ((circle_[i].getArea()) > 100) {
			count++;
		}
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�.";

	return 0;
}
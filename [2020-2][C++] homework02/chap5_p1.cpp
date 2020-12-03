//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//void swap(Circle& a, Circle& b) {
//    Circle circle_;
//    circle_ = a;
//    a = b;
//    b = circle_;
//}
//int main() {
//    Circle a(2), b(4);
//    cout << "a의 반지름 " << a.getRadius() << ", 원의 면적 " << a.getArea() << " / b의 반지름 " << b.getRadius() << ", 원의 면적 " << b.getArea() << endl;
//    cout << "\n[ swap 후 ]" << endl;
//    swap(a, b);
//    cout << "a의 반지름 " << a.getRadius() << ", 원의 면적 " << a.getArea() << " / b의 반지름 " << b.getRadius() << ", 원의 면적 " << b.getArea() << endl;
//    return 0;
//}
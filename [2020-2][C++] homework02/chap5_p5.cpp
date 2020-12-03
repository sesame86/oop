//#include <iostream>
//using namespace std;
//
//class Circle {
//    int radius;
//public:
//    Circle(int r) { radius = r; }
//    int getRadius() { return radius; }
//    void setRadius(int r) { radius = r; }
//    void show() { cout << "반지름이 " << radius << "인 원" << endl; }
//};
//void increaseBy(Circle& a, Circle b) { //참조에 의한 호출을 사용하면 원본 객체를 공유하기 때문에 원본객체에 값이 변경됨
//    int r = a.getRadius() + b.getRadius();
//    a.setRadius(r);
//}
//int main() {
//    Circle x(10), y(5);
//    increaseBy(x, y); // x의 반지름이 15인 원을 만들고자 한다.
//    x.show(); // "반지름이 15인 원"을 출력한다.
//}
//#include<iostream>
//using namespace std;
//
//class Circle {
//    int radius;
//public:
//    Circle(int radius = 0) {
//        this->radius = radius;
//    }
//    int getRadius() {
//        return radius;
//    }
//    void setRadius(int radius) {
//        this->radius = radius;
//    }
//    double getArea() {
//        return 3.14 * radius * radius;
//    }
//};
//class NamedCircle :public Circle {
//    string name;
//public:
//    NamedCircle() :Circle(0) {
//        name = " ";
//    }
//    NamedCircle(int r, string name) :Circle(r) {
//        this->name = name;
//    }
//    string getName() {
//        return name;
//    }
//    void setName(string name) {
//        this->name = name;
//    }
//    void show(string n) {
//        cout << "가장 면적이 큰 피자는 " << n << "입니다" << endl;
//    }
//};
//int main() {
//    NamedCircle pizza[5];
//    int radius_;
//    string name_;
//    cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << i + 1 << ">>";
//        cin >> radius_ >> name_;
//        pizza[i].setRadius(radius_);
//        pizza[i].setName(name_);
//    }
//    double max = pizza[0].getArea();
//    for (int i = 0; i < 5; i++) {
//        if (max < pizza[i].getArea()) {
//            max = pizza[i].getArea();
//            name_ = pizza[i].getName();
//        }
//    }
//    pizza->show(name_);
//}
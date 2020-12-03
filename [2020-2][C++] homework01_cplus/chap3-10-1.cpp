//#include <iostream>
//using namespace std;
//
//class Add {
//    int a, b;
//public:
//    Add();
//    Add(int c, int d);
//    void setValue(int x, int y);
//    int calculate();
//};
//Add::Add() {
//    a = 0; b = 0;
//}
//Add::Add(int c, int d) {
//    a = c;
//    b = d;
//}
//void Add::setValue(int x, int y) {
//    a = x;
//    b = y;
//}
//int Add::calculate() {
//    return a + b;
//}
//
//class Sub {
//    int a, b;
//public:
//    Sub();
//    Sub(int c, int d);
//    void setValue(int x, int y);
//    int calculate();
//};
//Sub::Sub() {
//    a = 0; b = 0;
//}
//Sub::Sub(int c, int d) {
//    a = c;
//    b = d;
//}
//void Sub::setValue(int x, int y) {
//    a = x;
//    b = y;
//}
//int Sub::calculate() {
//    return a - b;
//}
//class Mul {
//    int a, b;
//public:
//    Mul();
//    Mul(int c, int d);
//    void setValue(int x, int y);
//    int calculate();
//};
//Mul::Mul() {
//    a = 0; b = 0;
//}
//Mul::Mul(int c, int d) {
//    a = c;
//    b = d;
//}
//void Mul::setValue(int x, int y) {
//    a = x;
//    b = y;
//}
//int Mul::calculate() {
//    return a * b;
//}
//class Div {
//    int a, b;
//public:
//    Div();
//    Div(int c, int d);
//    void setValue(int x, int y);
//    int calculate();
//};
//Div::Div() {
//    a = 0; b = 0;
//}
//Div::Div(int c, int d) {
//    a = c;
//    b = d;
//}
//void Div::setValue(int x, int y) {
//    a = x;
//    b = y;
//}
//int Div::calculate() {
//    return a / b;
//}
//int main101()
//{
//    Add a;
//    Sub s;
//    Mul m;
//    Div d;
//
//    int num1, num2;
//    char operator_;
//
//    for (;;) {
//        cout << "두 정수와 연산자를 입력하세요>> ";
//        cin >> num1 >> num2 >> operator_;
//        switch (operator_) {
//        case '+':
//            a.setValue(num1, num2);
//            cout << a.calculate() << endl;
//            break;
//        case '-':
//            s.setValue(num1, num2);
//            cout << s.calculate() << endl;
//            break;
//        case '*':
//            m.setValue(num1, num2);
//            cout << m.calculate() << endl;
//            break;
//        default:
//            d.setValue(num1, num2);
//            cout << d.calculate() << endl;
//            break;
//        }
//    }
//    return 0;
//}
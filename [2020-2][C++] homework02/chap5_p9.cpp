//#include <iostream>
//using namespace std;
//
//class Accmulator {
//    int value;
//public:
//    Accmulator(int value) { this->value = value; }
//    Accmulator& add(int n);
//    int get() { return value; }
//};
//Accmulator& Accmulator::add(int n) {
//    value += n;
//    return *this;
//}
//int main() {
//    Accmulator acc(10);
//    acc.add(5).add(6).add(7); // acc�� value ����� 28�� �ȴ�.
//    cout << acc.get();// 28 ���
//}
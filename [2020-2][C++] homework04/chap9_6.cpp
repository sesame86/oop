//#include<iostream>
//#include <string>
//using namespace std;
//
//class AbstractStack {
//public:
//    virtual bool push(int n) = 0; // ���ÿ� n�� Ǫ���Ѵ�. ������ full�̸� false ����
//    virtual bool pop(int& n) = 0; // ���ÿ��� ���� ������ n�� �����ϰ� ������ empty�̸� false ����
//    virtual int size() = 0; // ���� ���ÿ� ����� ������ ���� ����
//};
//class IntStack :public AbstractStack {
//    int* p;
//    int tos, N;
//public:
//    IntStack(int size) {
//        p = new int[size];
//        this->N = size;
//        tos = 0;
//    }
//    bool push(int n);
//    bool pop(int& n);
//    int size();
//};
//bool IntStack::push(int n){
//    if (tos >= N){
//        cout << "Stack is full!" << '\n';
//        return false;
//    }
//    else{
//        cout << "push : " << n << '\n';
//        p[tos] = n;
//        tos++;
//    }
//}
//bool IntStack::pop(int& n){
//    if (tos == 0){
//        cout << "Stack is empty!" << '\n';
//        return false;
//    }
//    else{
//        cout << "pop : ";
//        tos--;
//        n = p[tos];
//        return true;
//    }
//}
//int IntStack::size(){
//    return tos;
//}
//int main() {
//    IntStack stack(3);
//    int n;
//
//    cout << "[push]" << endl;
//    for (int i = 0; i < 3; i++) {
//        stack.push(i);
//    }
//    cout << "[pop]" << endl;
//    for (int i = 0; i < 3; i++) {
//        stack.pop(n);
//        cout << n << endl;
//    }
//}
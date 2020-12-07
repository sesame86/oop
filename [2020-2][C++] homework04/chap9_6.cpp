//#include<iostream>
//#include <string>
//using namespace std;
//
//class AbstractStack {
//public:
//    virtual bool push(int n) = 0; // 스택에 n을 푸시한다. 스택이 full이면 false 리턴
//    virtual bool pop(int& n) = 0; // 스택에서 팝한 정수를 n에 저장하고 스택이 empty이면 false 리턴
//    virtual int size() = 0; // 현재 스택에 저장된 정수의 개수 리턴
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
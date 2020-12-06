#include<iostream>
#include <string>
using namespace std;

class AbstractStack {
public:
    virtual bool push(int n) = 0; // ���ÿ� n�� Ǫ���Ѵ�. ������ full�̸� false ����
    virtual bool pop(int& n) = 0; // ���ÿ��� ���� ������ n�� �����ϰ� ������ empty�̸� false ����
    virtual int size() = 0; // ���� ���ÿ� ����� ������ ���� ����
};
class IntStack :public AbstractStack {
    int* p;
    int tos;
    int stackSize;
public:
    IntStack(int size) { this->stackSize = size; p = new int[stackSize]; tos = -1; }
    ~IntStack() { delete[] p; }
    bool push(int n);
    bool pop(int& n);
    int size();
};
int main() {
    ANDGate andGate;

}
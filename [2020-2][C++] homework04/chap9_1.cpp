///*Converter Ŭ������ ��ӹ޾� km�� mile�� ��ȯ�ϴ� KmToMileŬ������ �ۼ��϶�.*/
//#include<iostream>
//#include <string>
//using namespace std;
//
//class Converter {
//protected:
//    double ratio;
//    virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
//    virtual string getSourceString() = 0; // src ���� ��Ī
//    virtual string getDestString() = 0; // dest ���� ��Ī
//public:
//    Converter(double ratio) {
//        this->ratio = ratio;
//    }
//    void run() {
//        double src;
//        cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
//        cout << getSourceString() << "�� �Է��ϼ���>> ";
//        cin >> src;
//        cout << "���� ��� : " << convert(src) << getDestString() << endl;
//    }
//};
//class WonToDollar :public Converter {
//    string src, dest;
//public:
//    double convert(double src) { return src / Converter::ratio; } //�Է� ��(��) ������ �⺻ ��(��)
//    string getSourceString() { return src; }
//    string getDestString() { return dest; }
//    WonToDollar(double ratio) :Converter(ratio) {
//        src = "Won";
//        dest = "Dollar";
//    }
//};
//int main() {
//    WonToDollar wd(1010);
//    wd.run();
//}
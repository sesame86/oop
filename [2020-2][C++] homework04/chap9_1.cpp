///*Converter 클래스를 상속받아 km를 mile로 변환하는 KmToMile클래스를 작성하라.*/
//#include<iostream>
//#include <string>
//using namespace std;
//
//class Converter {
//protected:
//    double ratio;
//    virtual double convert(double src) = 0; // src를 다른 단위로 변환한다.
//    virtual string getSourceString() = 0; // src 단위 명칭
//    virtual string getDestString() = 0; // dest 단위 명칭
//public:
//    Converter(double ratio) {
//        this->ratio = ratio;
//    }
//    void run() {
//        double src;
//        cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
//        cout << getSourceString() << "을 입력하세요>> ";
//        cin >> src;
//        cout << "변한 결과 : " << convert(src) << getDestString() << endl;
//    }
//};
//class WonToDollar :public Converter {
//    string src, dest;
//public:
//    double convert(double src) { return src / Converter::ratio; } //입력 돈(원) 나누기 기본 돈(원)
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
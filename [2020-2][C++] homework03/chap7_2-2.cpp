//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book {
//    string title;
//    int price, pages;
//public:
//    Book(string title = "", int price = 0, int pages = 0) {
//        this->title = title; this->price = price; this->pages = pages;
//    }
//    void show() {
//        cout << title << ' ' << price << "��" << pages << " ������" << endl;
//    }
//    string getTitle() { return title; }
//    friend bool operator== (Book op1, int price);
//    friend bool operator== (Book op1, string title);
//    friend bool operator== (Book op1, Book op2);
//};
//bool operator==(Book op1, int price)
//{
//    if (op1.price == price)
//        return true;
//    else
//        return false;
//    return false;
//}
//bool operator==(Book op1, string title)
//{
//    if (op1.title == title)
//        return true;
//    else
//        return false;
//}
//bool operator==(Book op1, Book op2)
//{
//    if (op1.price == op2.price && op1.title == op2.title && op1.pages == op2.pages)
//        return true;
//    else
//        return false;
//}
//int main() {
//    Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
//    if (a == 30000) cout << "���� 30000��" << endl; // price ��
//    if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
//    if (a == b)cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� ��
//}
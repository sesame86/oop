//#include <iostream>
//using namespace std;
//
//class Sample {
//	int* p;
//	int size;
//public:
//	Sample(int n) {
//		size = n; p = new int[n];
//	}
//	void read();
//	void write();
//	int big();
//	~Sample();
//};
//void Sample::read() {
//	for (int i = 0; i < size; i++) {
//		cin >> p[i];
//	}
//}
//void Sample::write() {
//	for (int i = 0; i < size; i++) {
//		cout << p[i] << ' ';
//	}
//	cout << endl;
//}
//Sample::~Sample() {
//	delete[] p;
//}
//int Sample::big() {
//	int big_ = p[0];
//	for (int i = 1; i < size; i++) {
//		if (big_ < p[i]) {
//			big_ = p[i];
//		}
//	}
//
//	return big_;
//}
//int main() {
//	Sample s(10);
//	s.read();
//	s.write();
//	cout << "가장 큰 수는 " << s.big() << endl;
//}
//#include<iostream>
//using namespace std;
//template <class T>
//T* concat(T x[], int x_size, T y[], int y_size) {
//	T* z = new T[x_size + y_size];
//	for (int i = 0; i < x_size; i++)
//		z[i] = x[i];
//	for (int i = 0; i < y_size; i++)
//		z[x_size + i] = y[i];
//	return z;
//}
//int main() {
//	int a[] = { 2, 0, 1, 7 };
//	int b[] = { 0, 4, 1, 9, 0 };
//	int a_size = sizeof(a) / sizeof(a[0]);
//	int b_size = sizeof(b) / sizeof(b[0]);
//	int size1 = a_size + b_size;
//	int* p = concat(a, a_size, b, b_size);
//	for (int i = 0; i < size1; ++i)
//		cout << p[i] << ' ';
//	cout << endl;
//	delete[] p;
//
//	char c[] = { 'K','i','m' };
//	char d[] = { 'Y','e','e','u','n' };
//	int c_size = sizeof(c) / sizeof(c[0]);
//	int d_size = sizeof(d) / sizeof(d[0]);
//	int size2 = c_size + d_size;
//	char* q = concat(c, c_size, d, d_size);
//	for (int i = 0; i < size2; ++i)
//		cout << q[i] << ' ';
//	cout << endl;
//	delete[] q;
//}
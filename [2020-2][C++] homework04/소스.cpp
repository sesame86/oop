#include <stdio.h>

void f(int a) {
	a = -a;
}
void g(int* a) {
	*a = -*a;
}
void h(int& a) {
	a = -a;
}
int main() {
	int n = 5;
	f(n);
	printf("%d\n", n);
	n = 5;
	g(&n);
	printf("%d\n", n);
	n = 5;
	h(n);
	printf("%d\n", n);
}
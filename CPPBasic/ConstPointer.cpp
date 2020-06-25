#include <iostream>
using namespace std;

//常指针，避免子函数调用指针是有写的权限
const int N = 6;
void print(const int* p, int n);
/*
int main() {
	int array[N];
	cout << "请输入" << N <<"个整数" << endl;
	for (int i = 0; i < N; ++i) {
		cin >> array[i];
	}
	print(array, N);
	return 0;
}
*/
void print(const int* p, int n) {
	cout << "{" << *p;
	for (int i = 1; i < n; ++i) {
		cout << "," << p[i];
	}
	cout << "}" << endl;
}
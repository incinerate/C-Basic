#include	<iostream>
#include	<math.h>
using namespace std;


//将一个Float类型的数分解成整数部分和小数部分
void splitFloat(float x, int* intPart, float* fracPart) {
	*intPart = static_cast<int>(x);
	//*intPart = floor(x);
	*fracPart = x - *intPart;
}
/*
int main() {
	cout << "input 1 float number" << endl;
	float x, f;
	cin >> x;
	int n;
	splitFloat(x, &n, &f);
	cout << "整数部分： " << n << "小数部分: " << f << endl;
	return 0;
}*/
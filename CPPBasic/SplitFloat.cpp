#include	<iostream>
#include	<math.h>
using namespace std;


//��һ��Float���͵����ֽ���������ֺ�С������
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
	cout << "�������֣� " << n << "С������: " << f << endl;
	return 0;
}*/
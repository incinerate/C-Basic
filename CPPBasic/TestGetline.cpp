#include <iostream>
#include <string>

using namespace std;

void testGetline() {
	cout << "���������е�ַ��Ҫ����� + , + ʡ/�ݣ�" << endl;
	for (int i = 2; i > 0; ++i) {
		string city, province;
		getline(cin, city, ',');
		getline(cin, province);
		cout << "City :" << city << ", " << "State :" << province << endl;
	}
}
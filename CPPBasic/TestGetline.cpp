#include <iostream>
#include <string>

using namespace std;

void testGetline() {
	cout << "请输入两行地址，要求城市 + , + 省/州：" << endl;
	for (int i = 2; i > 0; ++i) {
		string city, province;
		getline(cin, city, ',');
		getline(cin, province);
		cout << "City :" << city << ", " << "State :" << province << endl;
	}
}
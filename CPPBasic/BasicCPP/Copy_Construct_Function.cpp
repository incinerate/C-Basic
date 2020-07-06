#include <iostream>
#include "Point.h"
#include "IntNum.h"
using namespace std;

IntNum getNum() {
	IntNum i;
	return i;
}
Point::Point():x(1), y(1) { cout << "Calling the default constructor" << endl; }
/*int main() {
	cout << getNum().getInt() << endl;
}*/

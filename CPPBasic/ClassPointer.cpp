#include	<iostream>
#include	"Point.h"
#include	"PointArray.h"
using namespace std;
/*
//使用指针来访问Pointer类的成员
int main() {
	Point a(4,5);
	Point *p1 = &a;
	cout << p1->getX() << endl;
	cout << a.getX() << endl;

	//动态创建类对象
	cout << "Step 1" << endl;
	Point *ptr1 = new Point;
	delete ptr1;

	cout << "Step 2" << endl;
	ptr1 = new Point(1,2);
	delete ptr1;

	//动态创建对象数组
	ptr1 = new Point[2];
	ptr1[0].move(5, 10);
	ptr1[1].move(25, 30);
	cout << "deleting" << endl;
	delete[] ptr1;

	//动态数组类
	//int count;
	//cout << "please input the count of Points : " << endl;
	//cin >> count;
	PointArray points(2);
	points.element(0).move(3, 2);
	points.element(1).move(23, 45);

	//浅层复制
	PointArray pointArray2(points);
	cout << "Point 0 in pointArray2: " << pointArray2.element(0).getPoint() << endl;
	cout << "Point 1 in pointArray2: " << pointArray2.element(1).getPoint() << endl;
}
*/
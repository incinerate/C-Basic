#pragma once
#include	<iostream>
#include	<cassert>
#include	"Point.h"
using namespace std;

class PointArray {
public:
	//深层复制函数
	PointArray(const PointArray& pointArray);
	PointArray(int size) : size(size) {
		p = new Point[size];
	}
	~PointArray() {
		cout << "deleting" << endl;
		delete[] p;
	}

	Point& element(int index) {
		assert(index >= 0 && index < size);
		return p[index];
	}
private:
	int size; //动态数组大小
	Point *p; //指向动态数组首地址
};
PointArray::PointArray(const PointArray& v) {
	size = v.size;
	p = new Point[size];
	for (int i = 0; i < size; ++i) {
		p[i] = v.p[i];
	}
}

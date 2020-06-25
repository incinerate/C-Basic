#pragma once
#include	<iostream>
#include	<string>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout << "Default constructor called" << endl;
	}
	Point(int x, int y) : x(x), y(y) {
		cout << "Constructor called" << endl;
	}
	~Point() {
		cout << "Destructor called" << endl;
	}
	int const getX() { return x; }
	int const getY() { return y; }
	string const getPoint() { return "(" + to_string(x) + "," + to_string(y) + ")"; }
	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x;
	int y;
};
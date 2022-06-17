#pragma once
#include <iostream>
#include <cmath>
using namespace std;


class segment {
	int xs;
	int ys;
	int xe;
	int ye;
public:
	segment();
	segment(int start, int end);
	segment(int xs, int ys, int xe, int ye);

	int GetXs();
	int GetYs();
	int GetXe();
	int GetYe();

	double lenth();

	segment& operator ++ (int post);

	bool operator || (segment& other);

	void print();

};
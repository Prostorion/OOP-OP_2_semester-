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
	segment() {
		this->xs = 1;
		this->ys = 1;
		this->xe = 2;
		this->ye = 2;
	};
	segment(int start, int end) {
		this->xs = start;
		this->ys = start;
		this->xe = end;
		this->ye = end;
	};
	segment(int xs, int ys, int xe, int ye) {
		this->xs = xs;
		this->ys = ys;
		this->xe = xe;
		this->ye = ye;
	};

	int GetXs() { return xs; };
	int GetYs() { return ys; };
	int GetXe() { return xe; };
	int GetYe() { return ye; };

	double lenth() { return sqrt((xe - xs) * (xe - xs) + (ye - ys) * (ye - ys)); };
	segment& operator ++ (int post) {
		this->xs++;
		this->ys++;
		return *this;
	};

	bool operator || (segment & other) {
		if (this->lenth() == 0 or other.lenth() == 0) {
			cout << "\a";
			return 0;
		}
		double kThis = (this->ye - this->ys) / (this->xe - this->xs);
		double kOther = (other.ye - other.ys) / (other.xe - other.xs);
		return kThis == kOther;
	};

	void print() {
		cout << "X1 = " << xs << " Y1 = " << ys << " X2 = " << xe << " Y2 = " << ye;
	};

};
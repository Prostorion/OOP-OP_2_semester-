#include "Segment.h"

segment::segment()
{
	this->xs = 1;
	this->ys = 1;
	this->xe = 2;
	this->ye = 2;
}

segment::segment(int start, int end)
{
	this->xs = start;
	this->ys = start;
	this->xe = end;
	this->ye = end;
}

segment::segment(int xs, int ys, int xe, int ye)
{
	this->xs = xs;
	this->ys = ys;
	this->xe = xe;
	this->ye = ye;
}

int segment::GetXs()
{
	return xs;
}

int segment::GetYs()
{
	return ys;
}


int segment::GetXe()
{
	return xe;
}

int segment::GetYe()
{
	return ye;
}

double segment::lenth()
{
	return sqrt((xe - xs) * (xe - xs) + (ye - ys) * (ye - ys));
}

segment& segment::operator++(int post)
{
	this->xs++;
	this->ys++;
	return *this;
}

bool segment::operator||(segment& other)
{
	if (this->lenth() == 0 or other.lenth() == 0) {
		cout << "\a";
		return 0;
	}
	double kThis = (this->ye - this->ys) / (this->xe - this->xs);
	double kOther = (other.ye - other.ys) / (other.xe - other.xs);
	return kThis == kOther;
}

void segment::print()
{
	cout << "X1 = " << xs << " Y1 = " << ys << " X2 = " << xe << " Y2 = " << ye;
}


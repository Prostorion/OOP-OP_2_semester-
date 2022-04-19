#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

class worker {
	string name;
	int day;
	int month;
	int year;
public:
	worker(string name, int day, int month, int year) {
		this->name = name;
		this->day = day;
		this->month = month;
		this->year = year;
	};
	int experience(int Tday, int Tmonth, int Tyear) {
		int days = (Tyear - year) * 360 + (Tmonth - month) * 30 + (Tday - day);
		return days;
	};

	string GetName() { return this->name; };

	void print() {
		cout << setw(10)<<this->name << ":   " <<setw(2)<< this->day << "." << setw(2) << this->month << "." << setw(4) << this->year << endl;
	};
};
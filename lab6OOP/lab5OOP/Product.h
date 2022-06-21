#pragma once
#include <iostream>
#include<string>
using namespace std;

class Product {
private:
	string name;
	int count;
	double price;
public:

	Product(string name, int count, double price);

	Product() = default;

	string getName();
	int getCount();
	double getPrice();
	double getTotalPrice();

	bool operator> (const Product& other);

	bool operator< (const Product& other);

	


};
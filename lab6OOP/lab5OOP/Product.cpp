#include "Product.h"

Product::Product(string name , int count, double price)
{
	this->name = name;
	this->count = count;
	this->price = price;
}



string Product::getName()
{
	return this->name;
}
int Product::getCount()
{
	return this->count;
}

double Product::getPrice()
{
	return this->price;
}
bool Product::operator>(const Product& other)
{

	if (strcmp(this->name.c_str(), other.name.c_str()) > 0) {
		return true;
	}
	else {
		return false;
	}
	
}

double Product::getTotalPrice()
{
	return this->count * this->price;
}

bool Product::operator<(const Product& other)
{
	
	if (strcmp(this->name.c_str(), other.name.c_str()) < 0) {
		return true;
	}
	else {
		return false;
	}

}


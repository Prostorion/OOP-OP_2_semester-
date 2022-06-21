#pragma once
#include "Product.h"
#include <string>
class Node {
private: 
	Node* left;
	Node* right;
	Product item;
public:
	Node(Product new_item);
	Node* insert(Product new_item);

	Product findItem(string seek);

};
class Tree {
private:
	Node* root;
public:
	Tree();
	void insert(Product new_item);
	Product findItem(string name);
};
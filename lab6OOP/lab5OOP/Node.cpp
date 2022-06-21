#include "Tree.h"

Node::Node(Product new_item)
{
	this->item = Product (new_item.getName(), new_item.getCount(), new_item.getPrice());
	this->left = nullptr;
	this->right = nullptr;
}

Node* Node::insert(Product new_item)
{
	if (!this) {
		return  new Node(new_item);

	}
	else{
		if (this->item < new_item) {
			this->right = this->right->insert(new_item);
		}
		else {
			this->left = this->left->insert(new_item);
		}
	}
	return this;
	
}


Product Node::findItem(string seek)
{
	
	if(this){
		if (strcmp(seek.c_str(), this->item.getName().c_str())==0) {
			return this->item;
		}
		else if (strcmp(seek.c_str() , this->item.getName().c_str())<0) {
			return this->left->findItem(seek);
		}
		else return this->right->findItem(seek);
	}
	else {
		string name = "No such product found";
		return  Product (name, 0, 0); }
}


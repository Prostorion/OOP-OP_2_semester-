#include "Tree.h"

void Tree::insert(Product new_item)
{
	this->root = root->insert(new_item);
}

Tree::Tree()
{
	this->root = nullptr;
}

Product Tree::findItem(string name)
{
	return this->root->findItem(name);
}

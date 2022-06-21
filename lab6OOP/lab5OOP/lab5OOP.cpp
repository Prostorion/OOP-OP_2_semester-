
#include "Product.h"
#include "Tree.h"

int main()
{
    try
    {
        cout << "Enter number of products:";
        int n;
        cin >> n;
        if (!cin) { 
            throw "Wrong type of input."; 
        };
        if (n <= 0) {
            throw "Number should be positive.";
        }
        Tree tree;
        for (size_t i = 0; i < n; i++)
        {
            cout << "Enter name:";
            string name;
            cin >> name;

            cout << "Enter count:";
            int count;
            
            cin >> count;
            if (!cin) {
                throw "Wrong type of input.";
            };
            if (count <= 0) {
                throw "Number should be positive.";
            }
            cout << "Enter price:";
            double price;
            cin >> price;
            if (!cin) {
                throw "Wrong type of input.";
            };
            if (price <= 0) {
                throw "Number should be positive.";
            }
            tree.insert(Product(name, count, price));
        }
        cout << "Enter name of product to find total price: ";
        string el;
        cin >> el;
        Product found = tree.findItem(el);
        cout << found.getName() << " " << found.getTotalPrice();
    }
    catch (const char* s)
    {
        cerr << endl << s << endl;
    }
  
}


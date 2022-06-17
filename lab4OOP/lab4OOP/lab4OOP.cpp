
#include "Segment.h"

int main()
{
	segment B1;
	cout << "B1: ";
	B1.print();
	cout << "\n";

	segment B2(3, 6);
	cout << "B2: ";
	B2.print();
	cout << "\n";

	segment B3(1, 3, 4, 4);
	cout << "B3: ";
	B3.print();
	cout << "\n\n";


	bool isParallel = B1 || B2;

	if (isParallel) {
		cout << "B1 || B2\n\n";

	}
	else
	{
		cout << "B1 NOT|| B2\n\n";
	};


	B3++;

	cout << "B3++: ";
	B3.print();
	cout << "\n\n";

	cout << "B3 lenth: " << B3.lenth();


}

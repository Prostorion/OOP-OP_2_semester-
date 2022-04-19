

#include "Header.h"

int main()
{
	int length = 4;
	worker* workers = new worker[]{
	worker("Vasia", 10,10, 2018),
	worker("Tania", 7,8, 2018),
	worker("Masha", 3,2, 2018),
	worker("Ivan", 23,2, 2018)
	};
	int max = 0;
	string nameOfOld;
	for (size_t i = 0; i < length; i++)
	{
		if (workers[i].experience(14, 4, 2022) > max) {
			max = workers[i].experience(14, 4, 2022);
			nameOfOld = workers[i].GetName();
		}
		workers[i].print();
	}
	cout << "\nThe oldest worker: " << nameOfOld<<endl;
}


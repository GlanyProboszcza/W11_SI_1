#include "Library.h"
#include "Array.h"

int main()
{
	Array arr;
	arr.printFull();
	arr.print();
	arr.push_back(20);
	arr.printFull();
	arr.print();
	std::cout << arr.get(5) << std::endl;
	arr.printFull();
	arr.print();
	std::cout << arr.get(20) << std::endl;
	arr.printFull();
	arr.print();
	arr.set(30, 66);
	arr.printFull();
	arr.print();

	arr[60] = 400;
	arr.printFull();
	arr.print();

	std::cout << arr[30] << std::endl;

	arr.clear();
	arr.printFull();
	arr.print();
}

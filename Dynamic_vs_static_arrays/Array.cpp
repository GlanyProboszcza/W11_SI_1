#include "Array.h"

Array::Array() {
	tab = new int[10];

	for (int i = 0; i < 10; i++) {
		tab[i] = 0;
	}

	this->lenght = 10;
	this->next = 0;
}

void Array::push_back(int item) {

	if (this->next >= this->lenght) {
		int* newTab = new int[lenght * 2];
		this->lenght *= 2;

		for (int i = 0; i < next; i++) {
			newTab[i] = tab[i];
		}

		for (int i = next; i < lenght; i++) {
			newTab[i] = 0;
		}
		delete[] tab;
		tab = newTab;
	}
	tab[next] = item;
	next++;
}

int Array::get(int index) {
	if (index < lenght && index >= 0)
		return tab[index];

	else
		std::cout << "invalid array index"<< std::endl;
	return 0;
}

void Array::set(int index, int value) {
	
	if (index >= 0) {
		if (index >= lenght) {
			int* newTab = new int[index +10];
			this->lenght = index + 10;

			for (int i = 0; i < next; i++) {
				newTab[i] = tab[i];
			}

			for (int i = next; i < lenght; i++) {
				newTab[i] = 0;
			}
			delete[] tab;
			tab = newTab;
		}
		tab[index] = value;
		next = index+1;
	}
	else
		std::cout << "Invalid array index "<< std:: endl;
}

void Array::print() {
	for (int i = 0; i < next; i++) {
		std::cout << tab[i] << " ";
	}
		std::cout << std::endl;
		return;
}

void Array::printFull() {
	for (int i = 0; i < lenght; i++) {
		std::cout << tab[i] << " ";
	}
	std::cout << std::endl;
	return;
}

Array::~Array() {
	delete[] tab;
}

int& Array::operator[](int index) {

	if (index >= 0) {
		if (index >= lenght) {
			int* newTab = new int[index + 10];
			this->lenght = index + 10;

			for (int i = 0; i < next; i++) {
				newTab[i] = tab[i];
			}

			for (int i = next; i < lenght; i++) {
				newTab[i] = 0;
			}
			delete[] tab;
			tab = newTab;
		}
		if (index > next) {
			next = index + 1;
		}
		return  *(tab + index);
	}
	else
		std::cout << "Invalid array index " << std::endl;
	return *tab;
}

void Array::clear() {
	delete[] tab;

	tab = new int[10];

	for (int i = 0; i < 10; i++) {
		tab[i] = 0;
	}

	this->lenght = 10;
	this->next = 0;
}


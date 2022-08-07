#pragma once
#include "Library.h"

class Array
{
private:
	int* tab;
	int lenght, next;

public:
	Array();
	void push_back(int item);
	int get(int index);
	void set(int index, int value);
	void print();
	void printFull();
	~Array();

	int& operator[](int index);
	void clear();


};


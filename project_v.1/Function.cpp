#include "iostream"
#include "string"
#include "Header.h"

using namespace std;



int* DeleteArray(int* mas, int& size, int val) {

	int newSize = 0;
	for (int i = 0; i < size; ++i) {
		if (mas[i] != val) ++newSize;
	}

	if (newSize == size) return mas;

	int* temp = new int[newSize];
	int k = 0;
	for (int i = 0; i < size; ++i) {
		if (mas[i] != val) {
			temp[k] = mas[i];
			++k;
		}
	}

	delete[] mas;
	size = newSize;
	return temp;
}

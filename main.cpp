#include "iostream"
#include "string"
#include "Header.h"

using namespace std;

void main() {

	int size = 6;
	int* mas = new int[size] {1,2,3,4,5,6};
	
	mas = DeleteArray(mas, size, 4);

	for (int i = 0; i < size; ++i) {
		cout << mas[i] << " ";
	}

	delete[] mas;
}
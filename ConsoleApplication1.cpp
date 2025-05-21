#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;


    if (n <= 0) {
        cout << "Invalid size! Please enter a positive number." << endl;
        return 1;
    }

    int* masA = new int[n];


    cout << "Input " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> masA[i];
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (masA[j] > masA[j + 1]) {
                swap(masA[j], masA[j + 1]);
            }
        }
    }


    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << masA[i] << " ";
    }
    cout << endl;


    delete[] masA;

    return 0;
}
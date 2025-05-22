#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

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

    // Виклик сортування вставками
    insertionSort(masA, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << masA[i] << " ";
    }
    cout << endl;

    delete[] masA;

    return 0;
}

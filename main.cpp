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
            temp[k++] = mas[i];
            temp[k] = mas[i];
            ++k;
        }
    }

    delete[] mas;
    size = newSize;
    return temp;
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

    insertionSort(masA, n);

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

    int val;
    cout << "Enter value to delete from array: ";
    cin >> val;

    masA = DeleteArray(masA, n, val);

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << masA[i] << " ";
    }
    cout << endl;

    delete[] masA;

    return 0;
}

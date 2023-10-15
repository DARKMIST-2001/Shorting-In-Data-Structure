#include <iostream>
using namespace std;

int Partition(int ayan[], int start, int end) {
    int pivot = ayan[start];
    int pIndex = start;
    for (int i = start + 1; i <= end; i++) {
        if (ayan[i] < pivot) {
            pIndex++;
            int temp = ayan[i];
            ayan[i] = ayan[pIndex];
            ayan[pIndex] = temp;
        }
    }
    int temp = ayan[start];
    ayan[start] = ayan[pIndex];
    ayan[pIndex] = temp;
    return pIndex;
}

void quickSort(int ayan[], int start, int end) {
    if (start < end) {
        int p = Partition(ayan, start, end);
        quickSort(ayan, start, p - 1);
        quickSort(ayan, p + 1, end);
    }
}

int main() {
    int size;
    cout << "Enter The Size of Array: ";
    cin >> size;

    int ayan[size];

    cout << "Enter Your Array:";
    for (int i = 0; i < size; i++) {
        cin >> ayan[i];
    }
    cout << "****Before Sorting***" << endl;
    for (int i = 0; i < size; i++) {
        cout << ayan[i] << " ";
    }
    cout << endl;

    quickSort(ayan, 0, size - 1);

    cout << "****After Sorting***" << endl;
    for (int i = 0; i < size; i++) {
        cout << ayan[i] << " ";
    }

    return 0;
}

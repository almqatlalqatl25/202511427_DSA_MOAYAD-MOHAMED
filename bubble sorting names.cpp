#include <iostream>
#include <string>
using namespace std;

void bubbleSortNames(string arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    string names[] = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Manar", "Anne"};
    int n = 7;

    bubbleSortNames(names, n);

    cout << "Sorted names:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}

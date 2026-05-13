#include <iostream>
using namespace std;

int main() {
    int numbers[] = {109, 99, 23, 45, 23, 2, 5, 1};
    int n = 8;
    bool swapped = true;

    while (swapped) {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (numbers[i] > numbers[i + 1]) {
                swap(numbers[i], numbers[i + 1]);
                swapped = true;
            }
        }
    }

    cout << "Sorted numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of family members: ";
    cin >> n;

    string names[n];
    int ages[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        cin >> names[i];
        cout << "Enter age: ";
        cin >> ages[i];
    }

    string searchKey;
    cout << "\nEnter name to search: ";
    cin >> searchKey;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (names[i] == searchKey) {
            cout << "Name found: " << names[i] << ", Age: " << ages[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) cout << "Not found" << endl;

    return 0;
}

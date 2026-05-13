#include <iostream>
using namespace std;

int main() {

    string names[5];
    int ages[5];

    // Input names and ages
    for (int i = 0; i < 5; i++) {

        cout << "Enter name: ";
        cin >> names[i];

        cout << "Enter age: ";
        cin >> ages[i];
    }

    string key_name;
    bool found = false;

    // Search name
    cout << "Enter name to search: ";
    cin >> key_name;

    for (int i = 0; i < 5; i++) {

        if (names[i] == key_name) {

            cout << names[i] << " was found and is aged "
                 << ages[i] << endl;

            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "Not found";
    }

    return 0;
}

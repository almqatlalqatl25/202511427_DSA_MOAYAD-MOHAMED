#include <iostream>
using namespace std;

void congratulations(string name)
{
    cout << "Congratulations " << name << "!" << endl;
}

int main()
{
    string name;

    cout << "Enter your name: ";
    cin >> name;

    congratulations(name);

    return 0;
}

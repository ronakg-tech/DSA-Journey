#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "It is a positive number." << endl;
    } else if (num < 0) {
        cout << "It is a negative number." << endl;
    } else {
        cout << "It is equal to zero." << endl;
    }

    return 0;
}

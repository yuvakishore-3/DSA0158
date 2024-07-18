#include <iostream>
using namespace std;
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue function: a = " << a << ", b = " << b << endl;
}
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference function: a = " << a << ", b = " << b << endl;
}
int main() {
    int a, b;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    cout << "Original values: a = " << a << ", b = " << b << endl;
    swapByValue(a, b);
    cout << "After swapByValue function call: a = " << a << ", b = " << b << endl;
    swapByReference(a, b);
    cout << "After swapByReference function call: a = " << a << ", b = " << b << endl;

    return 0;
}

